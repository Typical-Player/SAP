#pragma once

namespace SAP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(int initialTheme)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SettingsThemeValue = initialTheme;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ SAPTabSettingsPanel;
	protected:
	private: System::Windows::Forms::TabPage^ SAPSettingsThemePage;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ SAPSettingsAudioPage;
	private: System::Windows::Forms::Panel^ SAPSettingsThemeTextClr;

	private: System::Windows::Forms::Panel^ SAPSettingsThemeForegroundClr;

	private: System::Windows::Forms::Panel^ SAPSettingsThemeBackgroundClr;
	private: System::Windows::Forms::Label^ NtImplementedLabelSettings;
	private: System::Windows::Forms::Label^ label2;



	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SAPTabSettingsPanel = (gcnew System::Windows::Forms::TabControl());
			this->SAPSettingsThemePage = (gcnew System::Windows::Forms::TabPage());
			this->SAPSettingsThemeTextClr = (gcnew System::Windows::Forms::Panel());
			this->SAPSettingsThemeForegroundClr = (gcnew System::Windows::Forms::Panel());
			this->SAPSettingsThemeBackgroundClr = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SAPSettingsAudioPage = (gcnew System::Windows::Forms::TabPage());
			this->NtImplementedLabelSettings = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SAPTabSettingsPanel->SuspendLayout();
			this->SAPSettingsThemePage->SuspendLayout();
			this->SAPSettingsAudioPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// SAPTabSettingsPanel
			// 
			this->SAPTabSettingsPanel->Controls->Add(this->SAPSettingsThemePage);
			this->SAPTabSettingsPanel->Controls->Add(this->SAPSettingsAudioPage);
			this->SAPTabSettingsPanel->Location = System::Drawing::Point(13, 13);
			this->SAPTabSettingsPanel->Name = L"SAPTabSettingsPanel";
			this->SAPTabSettingsPanel->SelectedIndex = 0;
			this->SAPTabSettingsPanel->Size = System::Drawing::Size(365, 303);
			this->SAPTabSettingsPanel->TabIndex = 0;
			// 
			// SAPSettingsThemePage
			// 
			this->SAPSettingsThemePage->Controls->Add(this->label2);
			this->SAPSettingsThemePage->Controls->Add(this->SAPSettingsThemeTextClr);
			this->SAPSettingsThemePage->Controls->Add(this->SAPSettingsThemeForegroundClr);
			this->SAPSettingsThemePage->Controls->Add(this->SAPSettingsThemeBackgroundClr);
			this->SAPSettingsThemePage->Controls->Add(this->label1);
			this->SAPSettingsThemePage->Controls->Add(this->listBox1);
			this->SAPSettingsThemePage->Location = System::Drawing::Point(4, 22);
			this->SAPSettingsThemePage->Name = L"SAPSettingsThemePage";
			this->SAPSettingsThemePage->Padding = System::Windows::Forms::Padding(3);
			this->SAPSettingsThemePage->Size = System::Drawing::Size(357, 277);
			this->SAPSettingsThemePage->TabIndex = 0;
			this->SAPSettingsThemePage->Text = L"Theme";
			this->SAPSettingsThemePage->UseVisualStyleBackColor = true;
			// 
			// SAPSettingsThemeTextClr
			// 
			this->SAPSettingsThemeTextClr->Location = System::Drawing::Point(275, 58);
			this->SAPSettingsThemeTextClr->Name = L"SAPSettingsThemeTextClr";
			this->SAPSettingsThemeTextClr->Size = System::Drawing::Size(58, 60);
			this->SAPSettingsThemeTextClr->TabIndex = 4;
			// 
			// SAPSettingsThemeForegroundClr
			// 
			this->SAPSettingsThemeForegroundClr->Location = System::Drawing::Point(211, 58);
			this->SAPSettingsThemeForegroundClr->Name = L"SAPSettingsThemeForegroundClr";
			this->SAPSettingsThemeForegroundClr->Size = System::Drawing::Size(58, 60);
			this->SAPSettingsThemeForegroundClr->TabIndex = 3;
			// 
			// SAPSettingsThemeBackgroundClr
			// 
			this->SAPSettingsThemeBackgroundClr->Location = System::Drawing::Point(146, 58);
			this->SAPSettingsThemeBackgroundClr->Name = L"SAPSettingsThemeBackgroundClr";
			this->SAPSettingsThemeBackgroundClr->Size = System::Drawing::Size(58, 60);
			this->SAPSettingsThemeBackgroundClr->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(201, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Current: Default";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Default", L"Blue", L"Purple", L"Black", L"White",
					L"Green"
			});
			this->listBox1->Location = System::Drawing::Point(7, 7);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 251);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::listBox1_SelectedIndexChanged);
			// 
			// SAPSettingsAudioPage
			// 
			this->SAPSettingsAudioPage->Controls->Add(this->NtImplementedLabelSettings);
			this->SAPSettingsAudioPage->Location = System::Drawing::Point(4, 22);
			this->SAPSettingsAudioPage->Name = L"SAPSettingsAudioPage";
			this->SAPSettingsAudioPage->Padding = System::Windows::Forms::Padding(3);
			this->SAPSettingsAudioPage->Size = System::Drawing::Size(357, 277);
			this->SAPSettingsAudioPage->TabIndex = 1;
			this->SAPSettingsAudioPage->Text = L"Audio";
			this->SAPSettingsAudioPage->UseVisualStyleBackColor = true;
			// 
			// NtImplementedLabelSettings
			// 
			this->NtImplementedLabelSettings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NtImplementedLabelSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NtImplementedLabelSettings->ForeColor = System::Drawing::Color::Red;
			this->NtImplementedLabelSettings->Location = System::Drawing::Point(3, 3);
			this->NtImplementedLabelSettings->Name = L"NtImplementedLabelSettings";
			this->NtImplementedLabelSettings->Size = System::Drawing::Size(351, 271);
			this->NtImplementedLabelSettings->TabIndex = 0;
			this->NtImplementedLabelSettings->Text = L"Not Implemented!";
			this->NtImplementedLabelSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(143, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Incomplete!";
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 328);
			this->Controls->Add(this->SAPTabSettingsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Settings";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Settings";
			this->Load += gcnew System::EventHandler(this, &Settings::Settings_Load);
			this->SAPTabSettingsPanel->ResumeLayout(false);
			this->SAPSettingsThemePage->ResumeLayout(false);
			this->SAPSettingsThemePage->PerformLayout();
			this->SAPSettingsAudioPage->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		property int SettingsThemeValue;


	private: System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e) {
		this->listBox1->SelectedIndex = SettingsThemeValue;
	}



	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		SettingsThemeValue = listBox1->SelectedIndex;
		Diagnostics::Debug::WriteLine("Theme selected!");
	}
	};
}
