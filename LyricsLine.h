#pragma once
namespace LRCService {
	using namespace System;
	ref class LyricsLine
	{
	public:
		LyricsLine(String^ lrcContent, Int64 timeMiliseconds, Int64 lrcId);

		String^ ToString() override;

		void setIsActive(bool active);
		bool getIsActive();

		Int64 getId();

		Int64 getMiliseconds();
	private:
		Int64 pTimeMiliseconds;
		Int64 lrcId;
		String^ lrcContent;
		bool isActive = false;
	};
}

