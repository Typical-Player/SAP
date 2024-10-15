﻿#pragma once
#include "File.h"
#include "About.h"
#include "Licenses.h"
#include "Settings.h"
#include "Lyrics.h"
#include "Player.h"

namespace SAP {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quickImportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sAPSimpleAudioPlayerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutSAPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ licensesToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ songTitleLabel;
	private: System::Windows::Forms::Label^ songArtistLabel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TrackBar^ audioTimeSlider;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ previousButton;
	private: System::Windows::Forms::Button^ playButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Button^ shuffleToggleBtn;
	private: System::Windows::Forms::Button^ repeatToggleBtn;
	private: System::Windows::Forms::TrackBar^ audioVolumeSlider;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::PictureBox^ songPicBox;
	private: System::Windows::Forms::DataGridView^ songListGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ songListColumnTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ songListColumnArtist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ songColumnListAlbum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ songColumnListDuration;
	private: System::Windows::Forms::TabControl^ songInfoTabCtrl;
	private: System::Windows::Forms::TabPage^ tabPageSongLyrics;
	private: System::Windows::Forms::TabPage^ tabPageSongInfo;
	private: System::Windows::Forms::TextBox^ tabSongInfoTxtBox;
	private: System::Windows::Forms::Timer^ seekBarUpdate;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ songCurrentTimeLabel;
	private: System::Windows::Forms::Label^ songTotalTimeLabel;
	private: System::Windows::Forms::ListBox^ songLRCList;
	private: System::Windows::Forms::Timer^ lyricsUpdateTimer;
	private: System::ComponentModel::IContainer^ components;
#pragma region Windows Form Designer generated code
	private:
		System::Drawing::Color baseColor;
		System::Drawing::Color shadeDarkColor;
		System::Drawing::Color shadeDarkerColor;

		   System::Drawing::Color txtColor;

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quickImportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sAPSimpleAudioPlayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutSAPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->licensesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->songTitleLabel = (gcnew System::Windows::Forms::Label());
			this->songArtistLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->audioTimeSlider = (gcnew System::Windows::Forms::TrackBar());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->previousButton = (gcnew System::Windows::Forms::Button());
			this->playButton = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->shuffleToggleBtn = (gcnew System::Windows::Forms::Button());
			this->repeatToggleBtn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->songCurrentTimeLabel = (gcnew System::Windows::Forms::Label());
			this->songTotalTimeLabel = (gcnew System::Windows::Forms::Label());
			this->audioVolumeSlider = (gcnew System::Windows::Forms::TrackBar());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->songPicBox = (gcnew System::Windows::Forms::PictureBox());
			this->songInfoTabCtrl = (gcnew System::Windows::Forms::TabControl());
			this->tabPageSongLyrics = (gcnew System::Windows::Forms::TabPage());
			this->songLRCList = (gcnew System::Windows::Forms::ListBox());
			this->tabPageSongInfo = (gcnew System::Windows::Forms::TabPage());
			this->tabSongInfoTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->songListGridView = (gcnew System::Windows::Forms::DataGridView());
			this->songListColumnTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->songListColumnArtist = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->songColumnListAlbum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->songColumnListDuration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->seekBarUpdate = (gcnew System::Windows::Forms::Timer(this->components));
			this->lyricsUpdateTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioTimeSlider))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioVolumeSlider))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->songPicBox))->BeginInit();
			this->songInfoTabCtrl->SuspendLayout();
			this->tabPageSongLyrics->SuspendLayout();
			this->tabPageSongInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->songListGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->sAPSimpleAudioPlayerToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(2, 2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1080, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->quickImportToolStripMenuItem,
					this->settingsToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_DropDownClosed);
			this->fileToolStripMenuItem->DropDownOpened += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_DropDownOpened);
			// 
			// quickImportToolStripMenuItem
			// 
			this->quickImportToolStripMenuItem->Name = L"quickImportToolStripMenuItem";
			this->quickImportToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->quickImportToolStripMenuItem->Text = L"Quick Import";
			this->quickImportToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quickImportToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::settingsToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(141, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// sAPSimpleAudioPlayerToolStripMenuItem
			// 
			this->sAPSimpleAudioPlayerToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->sAPSimpleAudioPlayerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutSAPToolStripMenuItem,
					this->licensesToolStripMenuItem
			});
			this->sAPSimpleAudioPlayerToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->sAPSimpleAudioPlayerToolStripMenuItem->Name = L"sAPSimpleAudioPlayerToolStripMenuItem";
			this->sAPSimpleAudioPlayerToolStripMenuItem->Size = System::Drawing::Size(157, 20);
			this->sAPSimpleAudioPlayerToolStripMenuItem->Text = L"SAP (Simple Audio Player)";
			this->sAPSimpleAudioPlayerToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &Form1::sAPSimpleAudioPlayerToolStripMenuItem_DropDownClosed);
			this->sAPSimpleAudioPlayerToolStripMenuItem->DropDownOpened += gcnew System::EventHandler(this, &Form1::sAPSimpleAudioPlayerToolStripMenuItem_DropDownOpened);
			// 
			// aboutSAPToolStripMenuItem
			// 
			this->aboutSAPToolStripMenuItem->Name = L"aboutSAPToolStripMenuItem";
			this->aboutSAPToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->aboutSAPToolStripMenuItem->Text = L"About SAP";
			this->aboutSAPToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutSAPToolStripMenuItem_Click);
			// 
			// licensesToolStripMenuItem
			// 
			this->licensesToolStripMenuItem->Name = L"licensesToolStripMenuItem";
			this->licensesToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->licensesToolStripMenuItem->Text = L"Licenses";
			this->licensesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::licensesToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(2, 26);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1080, 469);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 349);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1080, 120);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				220)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel6, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->audioVolumeSlider, 1, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1080, 120);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel3->SetColumnSpan(this->tableLayoutPanel4, 2);
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->songTitleLabel, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->songArtistLabel, 0, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->Padding = System::Windows::Forms::Padding(20, 5, 20, 5);
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1080, 60);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// songTitleLabel
			// 
			this->songTitleLabel->AutoSize = true;
			this->songTitleLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->songTitleLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->songTitleLabel->ForeColor = System::Drawing::Color::White;
			this->songTitleLabel->Location = System::Drawing::Point(23, 5);
			this->songTitleLabel->Name = L"songTitleLabel";
			this->songTitleLabel->Size = System::Drawing::Size(1034, 30);
			this->songTitleLabel->TabIndex = 0;
			this->songTitleLabel->Text = L"Import a folder (File > Quick scan) and select a folder";
			this->songTitleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// songArtistLabel
			// 
			this->songArtistLabel->AutoSize = true;
			this->songArtistLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->songArtistLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->songArtistLabel->ForeColor = System::Drawing::Color::DarkGray;
			this->songArtistLabel->Location = System::Drawing::Point(23, 35);
			this->songArtistLabel->Name = L"songArtistLabel";
			this->songArtistLabel->Size = System::Drawing::Size(1034, 20);
			this->songArtistLabel->TabIndex = 1;
			this->songArtistLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel6->Controls->Add(this->audioTimeSlider, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->flowLayoutPanel1, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->flowLayoutPanel2, 1, 1);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(20, 60);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(840, 60);
			this->tableLayoutPanel6->TabIndex = 1;
			// 
			// audioTimeSlider
			// 
			this->tableLayoutPanel6->SetColumnSpan(this->audioTimeSlider, 2);
			this->audioTimeSlider->Dock = System::Windows::Forms::DockStyle::Fill;
			this->audioTimeSlider->Location = System::Drawing::Point(3, 3);
			this->audioTimeSlider->Name = L"audioTimeSlider";
			this->audioTimeSlider->Size = System::Drawing::Size(834, 24);
			this->audioTimeSlider->TabIndex = 0;
			this->audioTimeSlider->TickStyle = System::Windows::Forms::TickStyle::None;
			this->audioTimeSlider->ValueChanged += gcnew System::EventHandler(this, &Form1::audioTimeSlider_ValueChanged);
			this->audioTimeSlider->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::audioTimeSlider_MouseDown);
			this->audioTimeSlider->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::audioTimeSlider_MouseUp);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->previousButton);
			this->flowLayoutPanel1->Controls->Add(this->playButton);
			this->flowLayoutPanel1->Controls->Add(this->nextButton);
			this->flowLayoutPanel1->Controls->Add(this->splitter1);
			this->flowLayoutPanel1->Controls->Add(this->shuffleToggleBtn);
			this->flowLayoutPanel1->Controls->Add(this->repeatToggleBtn);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 30);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(690, 30);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// previousButton
			// 
			this->previousButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->previousButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousButton.BackgroundImage")));
			this->previousButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->previousButton->FlatAppearance->BorderSize = 0;
			this->previousButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previousButton->Location = System::Drawing::Point(3, 3);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(30, 23);
			this->previousButton->TabIndex = 0;
			this->previousButton->UseVisualStyleBackColor = false;
			this->previousButton->Click += gcnew System::EventHandler(this, &Form1::previousButton_Click);
			this->previousButton->MouseEnter += gcnew System::EventHandler(this, &Form1::previousButton_MouseEnter);
			this->previousButton->MouseLeave += gcnew System::EventHandler(this, &Form1::previousButton_MouseLeave);
			// 
			// playButton
			// 
			this->playButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->playButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playButton.BackgroundImage")));
			this->playButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->playButton->FlatAppearance->BorderSize = 0;
			this->playButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playButton->Location = System::Drawing::Point(39, 3);
			this->playButton->Name = L"playButton";
			this->playButton->Size = System::Drawing::Size(30, 23);
			this->playButton->TabIndex = 1;
			this->playButton->UseVisualStyleBackColor = false;
			this->playButton->Click += gcnew System::EventHandler(this, &Form1::playButton_Click);
			this->playButton->MouseEnter += gcnew System::EventHandler(this, &Form1::playButton_MouseEnter);
			this->playButton->MouseLeave += gcnew System::EventHandler(this, &Form1::playButton_MouseLeave);
			// 
			// nextButton
			// 
			this->nextButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->nextButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextButton.BackgroundImage")));
			this->nextButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->nextButton->FlatAppearance->BorderSize = 0;
			this->nextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextButton->Location = System::Drawing::Point(75, 3);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(30, 23);
			this->nextButton->TabIndex = 2;
			this->nextButton->UseVisualStyleBackColor = false;
			this->nextButton->Click += gcnew System::EventHandler(this, &Form1::nextButton_Click);
			this->nextButton->MouseEnter += gcnew System::EventHandler(this, &Form1::nextButton_MouseEnter);
			this->nextButton->MouseLeave += gcnew System::EventHandler(this, &Form1::nextButton_MouseLeave);
			// 
			// splitter1
			// 
			this->splitter1->Cursor = System::Windows::Forms::Cursors::Default;
			this->splitter1->Location = System::Drawing::Point(111, 3);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 23);
			this->splitter1->TabIndex = 3;
			this->splitter1->TabStop = false;
			// 
			// shuffleToggleBtn
			// 
			this->shuffleToggleBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->shuffleToggleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shuffleToggleBtn.BackgroundImage")));
			this->shuffleToggleBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->shuffleToggleBtn->FlatAppearance->BorderSize = 0;
			this->shuffleToggleBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shuffleToggleBtn->Location = System::Drawing::Point(120, 3);
			this->shuffleToggleBtn->Name = L"shuffleToggleBtn";
			this->shuffleToggleBtn->Size = System::Drawing::Size(30, 23);
			this->shuffleToggleBtn->TabIndex = 4;
			this->shuffleToggleBtn->UseVisualStyleBackColor = false;
			this->shuffleToggleBtn->Click += gcnew System::EventHandler(this, &Form1::shuffleToggleBtn_Click);
			this->shuffleToggleBtn->MouseEnter += gcnew System::EventHandler(this, &Form1::shuffleToggleBtn_MouseEnter);
			this->shuffleToggleBtn->MouseLeave += gcnew System::EventHandler(this, &Form1::shuffleToggleBtn_MouseLeave);
			// 
			// repeatToggleBtn
			// 
			this->repeatToggleBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->repeatToggleBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeatToggleBtn.BackgroundImage")));
			this->repeatToggleBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->repeatToggleBtn->FlatAppearance->BorderSize = 0;
			this->repeatToggleBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->repeatToggleBtn->Location = System::Drawing::Point(156, 3);
			this->repeatToggleBtn->Name = L"repeatToggleBtn";
			this->repeatToggleBtn->Size = System::Drawing::Size(30, 23);
			this->repeatToggleBtn->TabIndex = 5;
			this->repeatToggleBtn->UseVisualStyleBackColor = false;
			this->repeatToggleBtn->Click += gcnew System::EventHandler(this, &Form1::repeatToggleBtn_Click);
			this->repeatToggleBtn->MouseEnter += gcnew System::EventHandler(this, &Form1::repeatToggleBtn_MouseEnter);
			this->repeatToggleBtn->MouseLeave += gcnew System::EventHandler(this, &Form1::repeatToggleBtn_MouseLeave);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoSize = true;
			this->flowLayoutPanel2->Controls->Add(this->songCurrentTimeLabel);
			this->flowLayoutPanel2->Controls->Add(this->songTotalTimeLabel);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(693, 33);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(144, 24);
			this->flowLayoutPanel2->TabIndex = 2;
			// 
			// songCurrentTimeLabel
			// 
			this->songCurrentTimeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->songCurrentTimeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->songCurrentTimeLabel->Location = System::Drawing::Point(0, 0);
			this->songCurrentTimeLabel->Margin = System::Windows::Forms::Padding(0);
			this->songCurrentTimeLabel->Name = L"songCurrentTimeLabel";
			this->songCurrentTimeLabel->Size = System::Drawing::Size(80, 23);
			this->songCurrentTimeLabel->TabIndex = 0;
			this->songCurrentTimeLabel->Text = L"00:00";
			this->songCurrentTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// songTotalTimeLabel
			// 
			this->songTotalTimeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->songTotalTimeLabel->Location = System::Drawing::Point(80, 0);
			this->songTotalTimeLabel->Margin = System::Windows::Forms::Padding(0);
			this->songTotalTimeLabel->Name = L"songTotalTimeLabel";
			this->songTotalTimeLabel->Size = System::Drawing::Size(44, 23);
			this->songTotalTimeLabel->TabIndex = 1;
			this->songTotalTimeLabel->Text = L"/  00:00";
			this->songTotalTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// audioVolumeSlider
			// 
			this->audioVolumeSlider->Dock = System::Windows::Forms::DockStyle::Fill;
			this->audioVolumeSlider->Location = System::Drawing::Point(863, 63);
			this->audioVolumeSlider->Margin = System::Windows::Forms::Padding(3, 3, 20, 3);
			this->audioVolumeSlider->Maximum = 100;
			this->audioVolumeSlider->Name = L"audioVolumeSlider";
			this->audioVolumeSlider->Size = System::Drawing::Size(197, 54);
			this->audioVolumeSlider->TabIndex = 2;
			this->audioVolumeSlider->TickStyle = System::Windows::Forms::TickStyle::None;
			this->audioVolumeSlider->Value = 100;
			this->audioVolumeSlider->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::audioVolumeSlider_MouseDown);
			this->audioVolumeSlider->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::audioVolumeSlider_MouseUp);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				250)));
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel7, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->songListGridView, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1080, 349);
			this->tableLayoutPanel5->TabIndex = 1;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->tableLayoutPanel7->ColumnCount = 1;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel7->Controls->Add(this->songPicBox, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->songInfoTabCtrl, 0, 1);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(830, 0);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 220)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(250, 349);
			this->tableLayoutPanel7->TabIndex = 2;
			// 
			// songPicBox
			// 
			this->songPicBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->songPicBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->songPicBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"songPicBox.Image")));
			this->songPicBox->Location = System::Drawing::Point(20, 20);
			this->songPicBox->Margin = System::Windows::Forms::Padding(20);
			this->songPicBox->Name = L"songPicBox";
			this->songPicBox->Size = System::Drawing::Size(210, 180);
			this->songPicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->songPicBox->TabIndex = 0;
			this->songPicBox->TabStop = false;
			// 
			// songInfoTabCtrl
			// 
			this->songInfoTabCtrl->Controls->Add(this->tabPageSongLyrics);
			this->songInfoTabCtrl->Controls->Add(this->tabPageSongInfo);
			this->songInfoTabCtrl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->songInfoTabCtrl->Location = System::Drawing::Point(0, 220);
			this->songInfoTabCtrl->Margin = System::Windows::Forms::Padding(0);
			this->songInfoTabCtrl->Name = L"songInfoTabCtrl";
			this->songInfoTabCtrl->Padding = System::Drawing::Point(0, 0);
			this->songInfoTabCtrl->SelectedIndex = 0;
			this->songInfoTabCtrl->Size = System::Drawing::Size(250, 129);
			this->songInfoTabCtrl->TabIndex = 1;
			// 
			// tabPageSongLyrics
			// 
			this->tabPageSongLyrics->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->tabPageSongLyrics->Controls->Add(this->songLRCList);
			this->tabPageSongLyrics->ForeColor = System::Drawing::Color::White;
			this->tabPageSongLyrics->Location = System::Drawing::Point(4, 22);
			this->tabPageSongLyrics->Margin = System::Windows::Forms::Padding(0);
			this->tabPageSongLyrics->Name = L"tabPageSongLyrics";
			this->tabPageSongLyrics->Size = System::Drawing::Size(242, 103);
			this->tabPageSongLyrics->TabIndex = 0;
			this->tabPageSongLyrics->Text = L"Lyrics";
			// 
			// songLRCList
			// 
			this->songLRCList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->songLRCList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->songLRCList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->songLRCList->ForeColor = System::Drawing::Color::White;
			this->songLRCList->FormattingEnabled = true;
			this->songLRCList->IntegralHeight = false;
			this->songLRCList->Location = System::Drawing::Point(0, 0);
			this->songLRCList->Margin = System::Windows::Forms::Padding(5);
			this->songLRCList->Name = L"songLRCList";
			this->songLRCList->Size = System::Drawing::Size(242, 103);
			this->songLRCList->TabIndex = 0;
			// 
			// tabPageSongInfo
			// 
			this->tabPageSongInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->tabPageSongInfo->Controls->Add(this->tabSongInfoTxtBox);
			this->tabPageSongInfo->ForeColor = System::Drawing::Color::White;
			this->tabPageSongInfo->Location = System::Drawing::Point(4, 22);
			this->tabPageSongInfo->Margin = System::Windows::Forms::Padding(0);
			this->tabPageSongInfo->Name = L"tabPageSongInfo";
			this->tabPageSongInfo->Size = System::Drawing::Size(242, 103);
			this->tabPageSongInfo->TabIndex = 1;
			this->tabPageSongInfo->Text = L"Detailed Information";
			// 
			// tabSongInfoTxtBox
			// 
			this->tabSongInfoTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->tabSongInfoTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tabSongInfoTxtBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabSongInfoTxtBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabSongInfoTxtBox->ForeColor = System::Drawing::Color::White;
			this->tabSongInfoTxtBox->Location = System::Drawing::Point(0, 0);
			this->tabSongInfoTxtBox->Margin = System::Windows::Forms::Padding(5);
			this->tabSongInfoTxtBox->Multiline = true;
			this->tabSongInfoTxtBox->Name = L"tabSongInfoTxtBox";
			this->tabSongInfoTxtBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tabSongInfoTxtBox->Size = System::Drawing::Size(242, 103);
			this->tabSongInfoTxtBox->TabIndex = 0;
			// 
			// songListGridView
			// 
			this->songListGridView->AllowUserToAddRows = false;
			this->songListGridView->AllowUserToDeleteRows = false;
			this->songListGridView->AllowUserToResizeRows = false;
			this->songListGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->songListGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->songListGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->songListGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->songListGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->songListGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->songListGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->songListGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->songListColumnTitle,
					this->songListColumnArtist, this->songColumnListAlbum, this->songColumnListDuration
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->songListGridView->DefaultCellStyle = dataGridViewCellStyle4;
			this->songListGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->songListGridView->GridColor = System::Drawing::Color::White;
			this->songListGridView->Location = System::Drawing::Point(0, 0);
			this->songListGridView->Margin = System::Windows::Forms::Padding(0);
			this->songListGridView->MultiSelect = false;
			this->songListGridView->Name = L"songListGridView";
			this->songListGridView->ReadOnly = true;
			this->songListGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->songListGridView->RowHeadersVisible = false;
			this->songListGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->songListGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->songListGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->songListGridView->Size = System::Drawing::Size(830, 349);
			this->songListGridView->TabIndex = 3;
			this->songListGridView->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Form1::songListGridView_CellMouseDoubleClick);
			// 
			// songListColumnTitle
			// 
			this->songListColumnTitle->DataPropertyName = L"Title";
			this->songListColumnTitle->HeaderText = L"Title";
			this->songListColumnTitle->Name = L"songListColumnTitle";
			this->songListColumnTitle->ReadOnly = true;
			this->songListColumnTitle->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// songListColumnArtist
			// 
			this->songListColumnArtist->DataPropertyName = L"Artist";
			this->songListColumnArtist->HeaderText = L"Artist";
			this->songListColumnArtist->Name = L"songListColumnArtist";
			this->songListColumnArtist->ReadOnly = true;
			this->songListColumnArtist->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// songColumnListAlbum
			// 
			this->songColumnListAlbum->DataPropertyName = L"Album";
			this->songColumnListAlbum->HeaderText = L"Album";
			this->songColumnListAlbum->Name = L"songColumnListAlbum";
			this->songColumnListAlbum->ReadOnly = true;
			this->songColumnListAlbum->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// songColumnListDuration
			// 
			this->songColumnListDuration->DataPropertyName = L"Duration";
			this->songColumnListDuration->FillWeight = 40;
			this->songColumnListDuration->HeaderText = L"Duration";
			this->songColumnListDuration->Name = L"songColumnListDuration";
			this->songColumnListDuration->ReadOnly = true;
			this->songColumnListDuration->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// seekBarUpdate
			// 
			this->seekBarUpdate->Interval = 800;
			this->seekBarUpdate->Tick += gcnew System::EventHandler(this, &Form1::seekBarUpdate_Tick);
			// 
			// lyricsUpdateTimer
			// 
			this->lyricsUpdateTimer->Interval = 50;
			this->lyricsUpdateTimer->Tick += gcnew System::EventHandler(this, &Form1::lyricsUpdateTimer_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(1084, 497);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(1100, 500);
			this->Name = L"Form1";
			this->Padding = System::Windows::Forms::Padding(2);
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SAP (Simple Audio Player)";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioTimeSlider))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->audioVolumeSlider))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->songPicBox))->EndInit();
			this->songInfoTabCtrl->ResumeLayout(false);
			this->tabPageSongLyrics->ResumeLayout(false);
			this->tabPageSongInfo->ResumeLayout(false);
			this->tabPageSongInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->songListGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fileToolStripMenuItem_DropDownOpened(System::Object^ sender, System::EventArgs^ e) {
		this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void fileToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::White;
	}
	private: System::Void sAPSimpleAudioPlayerToolStripMenuItem_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
		this->sAPSimpleAudioPlayerToolStripMenuItem->ForeColor = System::Drawing::Color::White;
	}
	private: System::Void sAPSimpleAudioPlayerToolStripMenuItem_DropDownOpened(System::Object^ sender, System::EventArgs^ e) {
		this->sAPSimpleAudioPlayerToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void playButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->playButton->BackColor = System::Drawing::Color::FromArgb(16, 16, 16);
	}
	private: System::Void nextButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->nextButton->BackColor = System::Drawing::Color::FromArgb(16, 16, 16);
	}
	private: System::Void previousButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->previousButton->BackColor = System::Drawing::Color::FromArgb(16, 16, 16);
	}
	private: System::Void previousButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->previousButton->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void playButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->playButton->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void nextButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->nextButton->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void shuffleToggleBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->shuffleToggleBtn->BackColor = System::Drawing::Color::FromArgb(16, 16, 16);
	}
	private: System::Void repeatToggleBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->repeatToggleBtn->BackColor = System::Drawing::Color::FromArgb(16, 16, 16);
	}
	private: System::Void shuffleToggleBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->shuffleToggleBtn->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void repeatToggleBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->repeatToggleBtn->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   FolderBrowserDialog^ folderDialog;
		   bool shuffleActive = false;
		   bool repeatActive = false;
		   bool loading = false;
		   bool folderLoaded = false;
		   int currentTheme = 0;

		   System::Void quickImportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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

		   void updateColor(System::Windows::Forms::Control^ c) {
			   c->BackColor = baseColor;
			   c->ForeColor = txtColor;
			   for each (System::Object^ subCtr in c->Controls)
			   {
				   auto control = static_cast<System::Windows::Forms::Control^>(subCtr);
				   if (control != nullptr)
				   {
					   updateColor(control);
				   }
			   }
		   }

		   void updateUnique() {
			   this->BackColor = shadeDarkColor;
			   this->tableLayoutPanel4->BackColor = shadeDarkerColor;
			   this->songTitleLabel->BackColor = shadeDarkerColor;
			   this->songArtistLabel->BackColor = shadeDarkerColor;
			   this->songListGridView->BackgroundColor = shadeDarkColor;
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   dataGridViewCellStyle1->BackColor = shadeDarkColor;
			   dataGridViewCellStyle1->ForeColor = txtColor;
			   dataGridViewCellStyle1->SelectionBackColor = shadeDarkerColor;
			   dataGridViewCellStyle1->SelectionForeColor = txtColor;
			   this->songListGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			   dataGridViewCellStyle2->BackColor = shadeDarkColor;
			   dataGridViewCellStyle2->ForeColor = txtColor;
			   dataGridViewCellStyle2->SelectionBackColor = shadeDarkerColor;
			   dataGridViewCellStyle2->SelectionForeColor = txtColor; dataGridViewCellStyle2->ForeColor = txtColor;
			   dataGridViewCellStyle2->SelectionBackColor = shadeDarkerColor;
			   dataGridViewCellStyle2->SelectionForeColor = txtColor;
			   this->songListGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			   this->songListGridView->DefaultCellStyle = dataGridViewCellStyle2;
			   this->songListGridView->GridColor = txtColor;
		   }


		   void loadColor(int colorId) {
			   switch (colorId)
			   {
			   case 0:
				   //Default
					   Diagnostics::Debug::WriteLine("Theme 0 loading...");
					   baseColor = System::Drawing::Color::FromArgb(29, 29, 29);
					   shadeDarkColor = System::Drawing::Color::FromArgb(25, 25, 25);
					   shadeDarkerColor = System::Drawing::Color::FromArgb(16, 16, 16);
					   txtColor = System::Drawing::Color::White;
					   for each (System::Object^ subCtr in this->Controls)
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

		   System::Void settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			   SAP::Settings^ settingsForm = gcnew SAP::Settings(currentTheme);
			   settingsForm->ShowDialog();
			   Diagnostics::Debug::WriteLine("MainForm: " + settingsForm->SettingsThemeValue);
			   currentTheme = settingsForm->SettingsThemeValue;

			   loadColor(currentTheme);
		   }
		   System::Void licensesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			   SAP::Licenses^ licenseForm = gcnew SAP::Licenses;
			   licenseForm->ShowDialog();
		   }
		   System::Void aboutSAPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			   SAP::About^ aboutForm = gcnew SAP::About;
			   aboutForm->ShowDialog();
		   }
		   File^ currentFile;
		   bool isFirst = true;
		   System::Void shuffleToggleBtn_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void repeatToggleBtn_Click(System::Object^ sender, System::EventArgs^ e) {
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

		   System::Void songLoadMetadata() {
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

		   Player^ player;
		   bool wasPlaying = false;
		   LRCService::Lyrics^ lyrics = gcnew LRCService::Lyrics();

	private: System::Void playButton_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void songListGridView_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
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

		   bool userIsInteracting = false;
	private: System::Void seekBarUpdate_Tick(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void audioTimeSlider_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		userIsInteracting = true;
	}
	private: System::Void audioTimeSlider_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->audioTimeSlider->Value == this->audioTimeSlider->Maximum - 1)
		{
			//End of file reached, change to next file!
			if (player != nullptr)
			{
				this->nextButton->PerformClick();
			}
		}
	}
	private: System::Void audioTimeSlider_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		userIsInteracting = false;

		if (player != nullptr)
		{

			if (this->audioTimeSlider->Enabled && !userIsInteracting)
			{
				player->setTimeInPcmFrames(this->audioTimeSlider->Value);
			}

		}
	}
	private: System::Void previousButton_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void audioVolumeSlider_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		userIsInteracting = true;
	}
	private: System::Void audioVolumeSlider_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (userIsInteracting)
		{
			if (player != nullptr)
			{
				player->setVolume(((float)(this->audioVolumeSlider->Value)) / 100);
			}
			userIsInteracting = false;
		}
	}
	private: System::Void lyricsUpdateTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (lyrics->getIsSynced())
		{
			lyrics->updateActives(player->getTimeInMiliseconds(), this->songLRCList);
		}
	}
	};
}
