#pragma once
#include "Lyrics.h"
namespace SAP {
	using namespace System;
	ref class File
	{
	public:
		File(String^ filePath);

		String^ getArtist();
		String^ getAlbum();
		String^ getTitle();

		property String^ Title {
			String^ get() {
				return title;
			}

			void set(String^ val) {}
		}

		property String^ Artist {
			String^ get() {
				return artist;
			}

			void set(String^ val) {}
		}

		property String^ Album {
			String^ get() {
				return album;
			}

			void set(String^ val) {}
		}

		property String^ Duration {
			String^ get() {
				return gcnew String((getMinutes() < 10 ? ("0" + getMinutes().ToString()) : getMinutes().ToString()) + ":" + (getSeconds() < 10 ? ("0" + getSeconds().ToString()) : getSeconds().ToString()));
			}

			void set(String^ val) {}
		}

		int getSeconds();
		int getMinutes();

		String^ ToString() override;

		String^ getFilePath();

		bool getIsValid();

		String^ getDetailedInfo();

		System::Drawing::Image^ tryGetImage();

		void getLyricsSynced(LRCService::Lyrics^ lyricsObj);

	private:
		bool isValid = true;

		String^ filePath;
		String^ title;
		String^ artist;
		String^ album;
		int seconds;
		int minutes;

	};
}

