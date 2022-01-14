#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Domain;
	

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_user;
	protected:
	private: System::Windows::Forms::TextBox^ txt_pass;
	private: System::Windows::Forms::Button^ btn_enter;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_user
			// 
			this->txt_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_user->Location = System::Drawing::Point(24, 51);
			this->txt_user->Multiline = true;
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(228, 31);
			this->txt_user->TabIndex = 0;
			// 
			// txt_pass
			// 
			this->txt_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pass->Location = System::Drawing::Point(24, 125);
			this->txt_pass->Multiline = true;
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->PasswordChar = '*';
			this->txt_pass->Size = System::Drawing::Size(228, 31);
			this->txt_pass->TabIndex = 1;
			// 
			// btn_enter
			// 
			this->btn_enter->BackColor = System::Drawing::Color::SteelBlue;
			this->btn_enter->FlatAppearance->BorderSize = 0;
			this->btn_enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_enter->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_enter->Location = System::Drawing::Point(24, 199);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(228, 31);
			this->btn_enter->TabIndex = 2;
			this->btn_enter->Text = L"Login";
			this->btn_enter->UseVisualStyleBackColor = false;
			this->btn_enter->Click += gcnew System::EventHandler(this, &Form1::btn_enter_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 310);
			this->Controls->Add(this->btn_enter);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->txt_user);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_pass->Text != "" && txt_user->Text != "") {
			UserModel^ user = gcnew UserModel();
			bool isLogged = user->LoginUser(txt_user->Text, txt_pass->Text);
			if (isLogged) {
				MessageBox::Show("Bienvenido!!!!");
			}
			else {
				MessageBox::Show("EFE :C");
			}

		}
		else {
			MessageBox::Show("Complete los campos");
		}

	}
	};
}
