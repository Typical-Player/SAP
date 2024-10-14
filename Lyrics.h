#pragma once
#include "LyricsLine.h"
namespace LRCService {
	using namespace System;
	ref class Lyrics
	{
	public:
		Lyrics();

		void AddSyncedLine(LyricsLine^ lrcLine);

		void AddUnsyncedLyrics(String^ lyrics);

		bool getIsSynced();
		void setIsSynced(bool isSynced);

		void updateActives(Int64 currentMilisecond, System::Windows::Forms::ListBox^ lstViewTarget);

		System::Collections::Generic::List<LyricsLine^>^ getArray();

		void populateList(System::Windows::Forms::ListBox^ lstViewTarget);
		void clear();
		void updateList(System::Windows::Forms::ListBox^ lstViewTarget);

	private:
		System::Collections::Generic::List<LyricsLine^>^ LRCArray;
		bool isSynced = false;
		String^ unsyncedLyrics;
	};
}

