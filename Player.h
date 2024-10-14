#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#define MINIAUDIO_IMPLEMENTATION
#include "miniaudio.h"
#include <msclr/marshal_cppstd.h>

void data_callback(ma_device* pDevice, void* pOutput, const void* pInput, ma_uint32 frameCount)
{
	ma_data_source_read_pcm_frames((ma_data_source*)pDevice->pUserData, pOutput, frameCount, NULL);

	(void)pInput;
}

namespace SAP {
	using namespace System;
	ref class Player
	{
	public:
		Player() {
			result = new ma_result();
			engine = new ma_engine();
			sound = new ma_sound();

			*result = ma_engine_init(NULL, engine);
			if (*result != MA_SUCCESS) {
				Diagnostics::Debug::WriteLine("MA: ER: Failed to initialize audio engine.");
				engineIsValid = false;
				return;
			}

			engineIsValid = true;

			Diagnostics::Debug::WriteLine("MA: OK: Audio engine initialized!");
		};


		~Player() {
			ma_engine_uninit(engine);
		};


		void loadFile(String^ path) {
			if (fileIsValid)
			{
				ma_sound_uninit(sound);
			}
			*result = ma_sound_init_from_file_w(engine, msclr::interop::marshal_as<std::wstring>(path).c_str(), MA_SOUND_FLAG_ASYNC | MA_SOUND_FLAG_STREAM, NULL, NULL, sound);
			if (*result != MA_SUCCESS) {
				Diagnostics::Debug::WriteLine("MA: ER: Failed to load file.");
				fileIsValid = false;
				return;
			}

			Diagnostics::Debug::WriteLine("MA: OK: File loaded!");
			fileIsValid = true;
		};

		void play() {
			*result = ma_sound_start(sound);
			if (*result != MA_SUCCESS) {
				Diagnostics::Debug::WriteLine("MA: ER: Failed start.");
			}
			Diagnostics::Debug::WriteLine("MA: OK: Start!");
		}

		void pause() {
			*result = ma_sound_stop(sound);
			if (*result != MA_SUCCESS) {
				Diagnostics::Debug::WriteLine("MA: ER: Failed to stop.");
			}
			Diagnostics::Debug::WriteLine("MA: OK: Pause!");
		}

		bool paused() {
			return !ma_sound_is_playing(sound);
		};

		bool fileValid() {
			return fileIsValid;
		};

		bool engineValid() {
			return engineIsValid;

		};

		uint64_t getTimeInMiliseconds() {
			return ma_sound_get_time_in_milliseconds(sound);
		}

		uint64_t getTimeInPcmFrames() {
			return ma_sound_get_time_in_pcm_frames(sound);
		}

		uint64_t getTotalTimeInPcmFrames() {
			uint64_t res;
			*result = ma_sound_get_length_in_pcm_frames(sound, &res);

			if (*result != MA_SUCCESS) {
				return -1;
			}

			return res;
		}

		float getTotalTimeInSeconds() {
			float res;
			*result = ma_sound_get_length_in_seconds(sound, &res);

			if (*result != MA_SUCCESS) {
				return -1.f;
			}

			return res;
		}

		void setTimeInPcmFrames(uint64_t second) {
			ma_sound_seek_to_pcm_frame(sound, second);
		}

		void setVolume(float vol) {
			*result = ma_engine_set_volume(engine, vol);
			if (*result != MA_SUCCESS) {
				Diagnostics::Debug::WriteLine("MA: ER: Failed to set volume!");
			}

			Diagnostics::Debug::WriteLine("MA: OK: New volume set!");
		}

	private:
		ma_result* result;
		ma_engine* engine;
		ma_sound* sound;

		bool engineIsValid = false;
		bool fileIsValid = false;
	};
}

#endif // !_PLAYER_H_


