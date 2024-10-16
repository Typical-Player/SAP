#include "pch.h"
#include "Form1.h"

System::Void SAP::Form1::fileToolStripMenuItem_DropDownOpened(System::Object^ sender, System::EventArgs^ e)
{
	this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
}

System::Void SAP::Form1::fileToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e)
{
	this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::White;
}

System::Void SAP::Form1::sAPSimpleAudioPlayerToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e)
{
	this->sAPSimpleAudioPlayerToolStripMenuItem->ForeColor = System::Drawing::Color::White;
}

System::Void SAP::Form1::sAPSimpleAudioPlayerToolStripMenuItem_DropDownOpened(System::Object^ sender, System::EventArgs^ e)
{
	this->sAPSimpleAudioPlayerToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
}

System::Void SAP::Form1::reactEventBtnHoverEnter(System::Object^ sender, System::EventArgs^ e)
{
	auto snd = cli::safe_cast<System::Windows::Forms::Button^>(sender);
	if (snd != nullptr)
	{
		snd->BackColor = System::Drawing::Color::FromArgb(16, 16, 16);
	}
}

System::Void SAP::Form1::reactEventBtnHoverLeave(System::Object^ sender, System::EventArgs^ e)
{
	auto snd = cli::safe_cast<System::Windows::Forms::Button^>(sender);
	if (snd != nullptr)
	{
		snd->BackColor = System::Drawing::Color::Transparent;
	}
}

System::Void SAP::Form1::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void SAP::Form1::quickImportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (folderLoaded)
	{
		System::Windows::Forms::MessageBox::Show("You already have a folder selected! Reopen the app to select another folder", "Folder already loaded", System::Windows::Forms::MessageBoxButtons::OK);
		return;
	}

	folderDialog = gcnew System::Windows::Forms::FolderBrowserDialog();
	if (folderDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && folderDialog->SelectedPath != "")
	{
		array<String^>^ files = System::IO::Directory::GetFiles(folderDialog->SelectedPath);

		System::Collections::Generic::List<SAP::File^>^ li = gcnew System::Collections::Generic::List<SAP::File^>();

		loading = true;
		this->songTitleLabel->Text = "Loading...";
		for each (String ^ file in files)
		{
			File^ f = gcnew File(file);

			if (f->getIsValid())
			{
				li->Add(f);
				this->songArtistLabel->Text = "File loaded: " + f->getFilePath();
			}
		}
		this->songListGridView->AutoGenerateColumns = false;
		this->songListGridView->DataSource = li;
		this->songTitleLabel->Text = "Double-click a song to open";
		this->songArtistLabel->Text = "";
		folderLoaded = true;
		loading = false;
	}
}

void SAP::Form1::updateColor(System::Windows::Forms::Control^ c)
{
	c->BackColor = baseColor;
	c->ForeColor = txtColor;
	for each (System::Object ^ subCtr in c->Controls)
	{
		auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
		if (control != nullptr)
		{
			updateColor(control);
		}
	}
}

void SAP::Form1::updateUnique()
{
	this->BackColor = shadeDarkColor;
	this->tableLayoutPanel4->BackColor = shadeDarkerColor;
	this->songTitleLabel->BackColor = shadeDarkerColor;
	this->songArtistLabel->BackColor = shadeDarkerColor;
	this->songListGridView->BackgroundColor = shadeDarkColor;
	this->songListGridView->ColumnHeadersDefaultCellStyle->BackColor = shadeDarkColor;
	this->songListGridView->ColumnHeadersDefaultCellStyle->ForeColor = txtColor;
	this->songListGridView->ColumnHeadersDefaultCellStyle->SelectionBackColor = shadeDarkerColor;
	this->songListGridView->ColumnHeadersDefaultCellStyle->SelectionForeColor = txtColor;
	this->songListGridView->DefaultCellStyle->BackColor = shadeDarkColor;
	this->songListGridView->DefaultCellStyle->ForeColor = txtColor;
	this->songListGridView->DefaultCellStyle->SelectionBackColor = shadeDarkerColor;
	this->songListGridView->DefaultCellStyle->SelectionForeColor = txtColor;
	this->songListGridView->DefaultCellStyle->ForeColor = txtColor;
	this->songListGridView->DefaultCellStyle->SelectionBackColor = shadeDarkerColor;
	this->songListGridView->DefaultCellStyle->SelectionForeColor = txtColor;
	this->songListGridView->GridColor = txtColor;
}

void SAP::Form1::loadColor(int colorId)
{
	switch (colorId)
	{
	case 0:
		//Default
		Diagnostics::Debug::WriteLine("Theme 0 loading...");
		baseColor = System::Drawing::Color::FromArgb(29, 29, 29);
		shadeDarkColor = System::Drawing::Color::FromArgb(25, 25, 25);
		shadeDarkerColor = System::Drawing::Color::FromArgb(16, 16, 16);
		txtColor = System::Drawing::Color::White;
		for each (System::Object ^ subCtr in this->Controls)
		{
			auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
			if (control != nullptr)
			{
				updateColor(control);
			}
		}
		updateUnique();
		break;
	case 1:
		//Blue
		Diagnostics::Debug::WriteLine("Theme 1 loading...");
		baseColor = System::Drawing::Color::FromArgb(60, 90, 120);
		shadeDarkColor = System::Drawing::Color::FromArgb(40, 65, 82);
		shadeDarkerColor = System::Drawing::Color::FromArgb(20, 35, 42);
		txtColor = System::Drawing::Color::White;
		for each (System::Object ^ subCtr in this->Controls)
		{
			auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
			if (control != nullptr)
			{
				updateColor(control);
			}
		}
		updateUnique();
		break;
	case 2:
		//Purple
		Diagnostics::Debug::WriteLine("Theme 2 loading...");
		baseColor = System::Drawing::Color::FromArgb(100, 70, 135);
		shadeDarkColor = System::Drawing::Color::FromArgb(65, 45, 90);
		shadeDarkerColor = System::Drawing::Color::FromArgb(30, 20, 40);
		txtColor = System::Drawing::Color::White;

		for each (System::Object ^ subCtr in this->Controls)
		{
			auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
			if (control != nullptr)
			{
				updateColor(control);
			}
		}
		updateUnique();
		break;
	case 3:
		//Black
		Diagnostics::Debug::WriteLine("Theme 3 loading...");
		baseColor = System::Drawing::Color::FromArgb(50, 50, 50);
		shadeDarkColor = System::Drawing::Color::FromArgb(35, 35, 35);
		shadeDarkerColor = System::Drawing::Color::FromArgb(0, 0, 0);
		txtColor = System::Drawing::Color::White;

		for each (System::Object ^ subCtr in this->Controls)
		{
			auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
			if (control != nullptr)
			{
				updateColor(control);
			}
		}
		updateUnique();
		break;
	case 4:
		//White
		Diagnostics::Debug::WriteLine("Theme 4 loading...");
		baseColor = System::Drawing::Color::FromArgb(180, 180, 180);
		shadeDarkColor = System::Drawing::Color::FromArgb(210, 210, 210);
		shadeDarkerColor = System::Drawing::Color::FromArgb(255, 255, 255);
		txtColor = System::Drawing::Color::Black;

		for each (System::Object ^ subCtr in this->Controls)
		{
			auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
			if (control != nullptr)
			{
				updateColor(control);
			}
		}
		updateUnique();
		break;
	case 5:
		//Green
		Diagnostics::Debug::WriteLine("Theme 5 loading...");
		baseColor = System::Drawing::Color::FromArgb(120, 200, 90);
		shadeDarkColor = System::Drawing::Color::FromArgb(85, 145, 65);
		shadeDarkerColor = System::Drawing::Color::FromArgb(55, 95, 45);
		txtColor = System::Drawing::Color::Black;

		for each (System::Object ^ subCtr in this->Controls)
		{
			auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
			if (control != nullptr)
			{
				updateColor(control);
			}
		}
		updateUnique();
		break;
	}
}

System::Void SAP::Form1::settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SAP::Settings^ settingsForm = gcnew SAP::Settings(currentTheme);
	settingsForm->ShowDialog();
	Diagnostics::Debug::WriteLine("MainForm: " + settingsForm->SettingsThemeValue);
	currentTheme = settingsForm->SettingsThemeValue;

	loadColor(currentTheme);
}

System::Void SAP::Form1::licensesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SAP::Licenses^ licenseForm = gcnew SAP::Licenses;
	licenseForm->ShowDialog();
}

System::Void SAP::Form1::aboutSAPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SAP::About^ aboutForm = gcnew SAP::About;
	aboutForm->ShowDialog();
}

System::Void SAP::Form1::shuffleToggleBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	if (!shuffleActive)
	{
		this->shuffleToggleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shuffleON")));
		this->shuffleActive = true;
	}
	else {
		this->shuffleToggleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shuffleToggleBtn.BackgroundImage")));
		this->shuffleActive = false;
	}
}

System::Void SAP::Form1::repeatToggleBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	if (!repeatActive)
	{
		this->repeatToggleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeatON")));
		this->repeatActive = true;
	}
	else {
		this->repeatToggleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeatToggleBtn.BackgroundImage")));
		this->repeatActive = false;
	}
}

void SAP::Form1::songLoadMetadata()
{
	if (!loading)
	{
		File^ file = static_cast<SAP::File^>(this->songListGridView->Rows[this->songListGridView->CurrentCell->RowIndex]->DataBoundItem);

		if (file != nullptr)
		{
			this->songLRCList->Items->Clear();
			lyrics->clear();
			if (!file->getIsValid())
			{
				this->songArtistLabel->Text = "FILEPATH:[ " + file->getFilePath() + " ]";
				this->songTitleLabel->Text = "Error while reading metadata!";
			}
			else {
				System::Drawing::Image^ img = file->tryGetImage();

				if (img != nullptr)
				{
					this->songPicBox->Image = img;
				}
				else {
					System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
					this->songPicBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"songPicBox.Image")));
				}
				file->getLyricsSynced(lyrics);

				if (lyrics->getIsSynced())
				{
					Diagnostics::Debug::WriteLine("LrcService: OK: Lyrics Detected!");
					lyrics->populateList(this->songLRCList);

				}
				else {
					Diagnostics::Debug::WriteLine("LrcService: WARN: couldnt detect synced lyrics!");
					this->songLRCList->Items->Add("No synced lyrics found!");
				}
			}
			currentFile = file;
			this->songInfoTabCtrl->TabPages[1]->Controls[0]->Text = file->getDetailedInfo();
		}
	}
}

System::Void SAP::Form1::playButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
	if (player == nullptr)
	{
		player = gcnew Player();
	}
	if (player != nullptr && currentFile != nullptr)
	{
		if (player->paused() && player->fileValid() && player->engineValid()) {
			player->play();
			wasPlaying = true;
			this->seekBarUpdate->Enabled = true;
			this->playButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pause")));
			this->lyricsUpdateTimer->Enabled = true;
		}
		else {
			if (!player->fileValid() || !player->engineValid())
			{
				System::Diagnostics::Debug::WriteLine("MA: ERR: Either file is invalid or engine is invalid!");
			}
			player->pause();
			wasPlaying = false;
			this->seekBarUpdate->Enabled = false;
			this->playButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playButton.BackgroundImage")));
			this->lyricsUpdateTimer->Enabled = false;
		}
	}
}

System::Void SAP::Form1::songListGridView_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e)
{
	if (!loading)
	{
		songLoadMetadata();
		File^ file = static_cast<SAP::File^>(this->songListGridView->Rows[this->songListGridView->CurrentCell->RowIndex]->DataBoundItem);

		if (player == nullptr)
		{
			player = gcnew Player();
		}

		if (file != nullptr)
		{
			if (!file->getIsValid()) {
				this->songArtistLabel->Text = "FILEPATH:[ " + file->getFilePath() + " ]";
				this->songTitleLabel->Text = "Error while reading metadata!";
			}
			else {
				this->songArtistLabel->Text = file->getArtist() + " - " + file->getAlbum();
				this->songTitleLabel->Text = file->getTitle();
				this->songTotalTimeLabel->Text = "/  " + (file->getMinutes() < 10 ? ("0" + file->getMinutes().ToString()) : file->getMinutes().ToString()) + ":" + (file->getSeconds() < 10 ? ("0" + file->getSeconds().ToString()) : file->getSeconds().ToString());
				currentFile = file;


				if (player != nullptr)
				{
					player->loadFile(file->getFilePath());

					if (player->getTotalTimeInPcmFrames() == -1)
					{
						this->audioTimeSlider->Enabled = false;
					}
					else {
						this->audioTimeSlider->Maximum = player->getTotalTimeInPcmFrames();
					}

					if (wasPlaying)
					{
						this->playButton->PerformClick();
					}
				}
			}
		}
	}
}

System::Void SAP::Form1::seekBarUpdate_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (player->paused())
	{
		System::Diagnostics::Debug::WriteLine("End of file reached!");
		this->seekBarUpdate->Enabled = false;
		this->audioTimeSlider->Value = this->audioTimeSlider->Maximum - 1;
	}

	if (player != nullptr)
	{
		if (!player->paused()) {
			uint64_t curTime = player->getTimeInMiliseconds();
			this->songCurrentTimeLabel->Text = (((uint64_t)(curTime / 60000) % 60) < 10 ? ("0" + ((uint64_t)(curTime / 60000) % 60)) : ((uint64_t)(curTime / 60000) % 60).ToString()) + ":" + (((uint64_t)(curTime / 1000) % 60) < 10 ? ("0" + ((uint64_t)(curTime / 1000) % 60)) : ((uint64_t)(curTime / 1000) % 60).ToString());

			if (this->audioTimeSlider->Enabled && !userIsInteracting)
			{
				if (player->getTimeInPcmFrames() >= 0 && player->getTimeInPcmFrames() < this->audioTimeSlider->Maximum)
				{
					this->audioTimeSlider->Value = player->getTimeInPcmFrames();
				}
			}
		}
	}
}

System::Void SAP::Form1::audioTimeSlider_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	userIsInteracting = true;
}

System::Void SAP::Form1::audioTimeSlider_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->audioTimeSlider->Value == this->audioTimeSlider->Maximum - 1)
	{
		//End of file reached, change to next file!
		if (player != nullptr)
		{
			this->nextButton->PerformClick();
		}
	}
}

System::Void SAP::Form1::audioTimeSlider_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	userIsInteracting = false;

	if (player != nullptr)
	{

		if (this->audioTimeSlider->Enabled && !userIsInteracting)
		{
			player->setTimeInPcmFrames(this->audioTimeSlider->Value);
		}

	}
}

System::Void SAP::Form1::previousButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (player != nullptr)
	{

		if (player->getTimeInMiliseconds() > 5000)
		{
			player->setTimeInPcmFrames(0);
			if (!wasPlaying)
			{
				if (player->getTimeInPcmFrames() >= 0 && player->getTimeInPcmFrames() < this->audioTimeSlider->Maximum)
				{
					this->audioTimeSlider->Value = player->getTimeInPcmFrames();
				}
			}
			return;
		}

		if (repeatActive)
		{

			player->setTimeInPcmFrames(0);
			if (!wasPlaying)
			{
				if (player->getTimeInPcmFrames() >= 0 && player->getTimeInPcmFrames() < this->audioTimeSlider->Maximum)
				{
					this->audioTimeSlider->Value = player->getTimeInPcmFrames();
				}
			}

		}
		else {
			if (shuffleActive)
			{
				System::Random^ r = gcnew System::Random();

				loading = true;
				this->songListGridView->CurrentCell = this->songListGridView[0, r->Next(0, this->songListGridView->RowCount - 1)];
				loading = false;
				songLoadMetadata();
				songListGridView_CellMouseDoubleClick(nullptr, nullptr);
			}
			else {
				if (this->songListGridView->CurrentCell->RowIndex - 1 >= 0)
				{
					loading = true;
					this->songListGridView->CurrentCell = this->songListGridView[0, this->songListGridView->CurrentCell->RowIndex - 1];
					loading = false;
					songLoadMetadata();
					songListGridView_CellMouseDoubleClick(nullptr, nullptr);
				}
			}
		}
	}
}

System::Void SAP::Form1::nextButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (repeatActive)
	{
		if (player != nullptr)
		{
			player->setTimeInPcmFrames(0);
			if (!wasPlaying)
			{
				if (player->getTimeInPcmFrames() >= 0 && player->getTimeInPcmFrames() < this->audioTimeSlider->Maximum)
				{
					this->audioTimeSlider->Value = player->getTimeInPcmFrames();
				}
			}
		}
	}
	else {
		if (shuffleActive)
		{
			System::Random^ r = gcnew System::Random();

			loading = true;
			this->songListGridView->CurrentCell = this->songListGridView[0, r->Next(0, this->songListGridView->RowCount - 1)];
			loading = false;
			songLoadMetadata();
			songListGridView_CellMouseDoubleClick(nullptr, nullptr);
		}
		else {
			if (this->songListGridView->CurrentCell->RowIndex + 1 < this->songListGridView->RowCount)
			{
				loading = true;
				this->songListGridView->CurrentCell = this->songListGridView[0, this->songListGridView->CurrentCell->RowIndex + 1];
				loading = false;
				songLoadMetadata();
				songListGridView_CellMouseDoubleClick(nullptr, nullptr);
			}
		}
	}
}

System::Void SAP::Form1::audioVolumeSlider_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	userIsInteracting = true;
}

System::Void SAP::Form1::audioVolumeSlider_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (userIsInteracting)
	{
		if (player != nullptr)
		{
			player->setVolume(((float)(this->audioVolumeSlider->Value)) / 100);
		}
		userIsInteracting = false;
	}
}

System::Void SAP::Form1::lyricsUpdateTimer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (lyrics->getIsSynced())
	{
		lyrics->updateActives(player->getTimeInMiliseconds(), this->songLRCList);
	}
}
