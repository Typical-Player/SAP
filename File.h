#pragma once
#ifndef _FILE_H_
#define _FILE_H_
#include "Lyrics.h"

namespace SAP {
	using namespace System;
	ref class File
	{
	public:
		File(String^ filePath);
		~File();

		String^ getArtist();
		String^ getAlbum();
		String^ getTitle();

		property String^ Title {
			String^ get() {
				return title;
			}
		}

		property String^ Artist {
			String^ get() {
				return artist;
			}
		}

		property String^ Album {
			String^ get() {
				return album;
			}
		}

		property String^ Duration {
			String^ get() {
				return gcnew String(getMinutes().ToString()->PadLeft(2, L'0')) + ":" + (getSeconds().ToString()->PadLeft(2, L'0'));
			}
		}

		int getSeconds();
		int getMinutes();

		String^ getFilePath();
		String^ getDetailedInfo();
		System::Drawing::Image^ tryGetImage();
		bool getIsValid();
		void getLyricsSynced(LRCService::Lyrics^ lyricsObj);
		String^ ToString() override;

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

#endif // !_FILE_H_