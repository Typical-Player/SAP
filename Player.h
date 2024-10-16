#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#define MINIAUDIO_IMPLEMENTATION
#include "Miniaudio.h"
#include <msclr/marshal_cppstd.h>

namespace SAP {
	using namespace System;
	using namespace System::Diagnostics;
	ref class Player
	{
	public:
		Player();
		~Player();

		void loadFile(String^ path);

		void play();
		void pause();
		bool paused();
		bool fileValid();
		bool engineValid();
		uint64_t getTimeInMiliseconds();
		uint64_t getTimeInPcmFrames();
		uint64_t getTotalTimeInPcmFrames();
		float getTotalTimeInSeconds();
		void setTimeInPcmFrames(uint64_t second);
		void setVolume(float vol);

	private:
		ma_result* result;
		ma_engine* engine;
		ma_sound* sound;

		bool engineIsValid = false;
		bool fileIsValid = false;
	};
}

#endif // !_PLAYER_H_