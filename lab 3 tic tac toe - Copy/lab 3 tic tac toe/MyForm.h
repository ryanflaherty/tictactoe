#pragma once
#include "Game.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ img_X = gcnew Bitmap("Graphics/X.bmp");
		Bitmap^ img_O = gcnew Bitmap("Graphics/O.bmp");

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Space00;
	private: System::Windows::Forms::Button^  Space01;
	private: System::Windows::Forms::Button^  Space02;
	private: System::Windows::Forms::Button^  Space10;
	private: System::Windows::Forms::Button^  Space11;
	private: System::Windows::Forms::Button^  Space12;
	private: System::Windows::Forms::Button^  Space20;
	private: System::Windows::Forms::Button^  Space21;
	private: System::Windows::Forms::Button^  Space22;









	private: System::Windows::Forms::Button^  new_game;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Space00 = (gcnew System::Windows::Forms::Button());
			this->Space01 = (gcnew System::Windows::Forms::Button());
			this->Space02 = (gcnew System::Windows::Forms::Button());
			this->Space10 = (gcnew System::Windows::Forms::Button());
			this->Space11 = (gcnew System::Windows::Forms::Button());
			this->Space12 = (gcnew System::Windows::Forms::Button());
			this->Space20 = (gcnew System::Windows::Forms::Button());
			this->Space21 = (gcnew System::Windows::Forms::Button());
			this->Space22 = (gcnew System::Windows::Forms::Button());
			this->new_game = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(460, 350);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Space00
			// 
			this->Space00->Location = System::Drawing::Point(12, 368);
			this->Space00->Name = L"Space00";
			this->Space00->Size = System::Drawing::Size(75, 23);
			this->Space00->TabIndex = 1;
			this->Space00->Text = L"0, 0";
			this->Space00->UseVisualStyleBackColor = true;
			this->Space00->Click += gcnew System::EventHandler(this, &MyForm::Space00_Click);
			// 
			// Space01
			// 
			this->Space01->Location = System::Drawing::Point(93, 368);
			this->Space01->Name = L"Space01";
			this->Space01->Size = System::Drawing::Size(75, 23);
			this->Space01->TabIndex = 2;
			this->Space01->Text = L"0, 1";
			this->Space01->UseVisualStyleBackColor = true;
			// 
			// Space02
			// 
			this->Space02->Location = System::Drawing::Point(174, 368);
			this->Space02->Name = L"Space02";
			this->Space02->Size = System::Drawing::Size(75, 23);
			this->Space02->TabIndex = 3;
			this->Space02->Text = L"0, 2";
			this->Space02->UseVisualStyleBackColor = true;
			// 
			// Space10
			// 
			this->Space10->Location = System::Drawing::Point(12, 397);
			this->Space10->Name = L"Space10";
			this->Space10->Size = System::Drawing::Size(75, 23);
			this->Space10->TabIndex = 4;
			this->Space10->Text = L"1, 0";
			this->Space10->UseVisualStyleBackColor = true;
			// 
			// Space11
			// 
			this->Space11->Location = System::Drawing::Point(93, 397);
			this->Space11->Name = L"Space11";
			this->Space11->Size = System::Drawing::Size(75, 23);
			this->Space11->TabIndex = 5;
			this->Space11->Text = L"1, 1";
			this->Space11->UseVisualStyleBackColor = true;
			// 
			// Space12
			// 
			this->Space12->Location = System::Drawing::Point(174, 397);
			this->Space12->Name = L"Space12";
			this->Space12->Size = System::Drawing::Size(75, 23);
			this->Space12->TabIndex = 6;
			this->Space12->Text = L"1, 2";
			this->Space12->UseVisualStyleBackColor = true;
			// 
			// Space20
			// 
			this->Space20->Location = System::Drawing::Point(12, 426);
			this->Space20->Name = L"Space20";
			this->Space20->Size = System::Drawing::Size(75, 23);
			this->Space20->TabIndex = 7;
			this->Space20->Text = L"2, 0";
			this->Space20->UseVisualStyleBackColor = true;
			// 
			// Space21
			// 
			this->Space21->Location = System::Drawing::Point(93, 427);
			this->Space21->Name = L"Space21";
			this->Space21->Size = System::Drawing::Size(75, 23);
			this->Space21->TabIndex = 8;
			this->Space21->Text = L"2, 1";
			this->Space21->UseVisualStyleBackColor = true;
			// 
			// Space22
			// 
			this->Space22->Location = System::Drawing::Point(174, 426);
			this->Space22->Name = L"Space22";
			this->Space22->Size = System::Drawing::Size(75, 23);
			this->Space22->TabIndex = 9;
			this->Space22->Text = L"2, 2";
			this->Space22->UseVisualStyleBackColor = true;
			// 
			// new_game
			// 
			this->new_game->Location = System::Drawing::Point(397, 368);
			this->new_game->Name = L"new_game";
			this->new_game->Size = System::Drawing::Size(75, 23);
			this->new_game->TabIndex = 10;
			this->new_game->Text = L"New Game";
			this->new_game->UseVisualStyleBackColor = true;
			this->new_game->Click += gcnew System::EventHandler(this, &MyForm::new_game_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(484, 462);
			this->Controls->Add(this->new_game);
			this->Controls->Add(this->Space22);
			this->Controls->Add(this->Space21);
			this->Controls->Add(this->Space20);
			this->Controls->Add(this->Space12);
			this->Controls->Add(this->Space11);
			this->Controls->Add(this->Space10);
			this->Controls->Add(this->Space02);
			this->Controls->Add(this->Space01);
			this->Controls->Add(this->Space00);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Tic-Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Drawing::Brush^ blackBrush;
		Drawing::Graphics^ g;

		int temp;
		int count;

		game space;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 blackBrush = gcnew Drawing::SolidBrush(Color::Black);
				 g = pictureBox1->CreateGraphics();
	}
	private: System::Void new_game_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Refresh();
				 Drawing::Rectangle Left(145, 10, 5, 330);
				 g->FillRectangle(blackBrush, Left);
				 Drawing::Rectangle Right(305, 10, 5, 330);
				 g->FillRectangle(blackBrush, Right);
				 Drawing::Rectangle Up(10, 105, 440, 5);
				 g->FillRectangle(blackBrush, Up);
				 Drawing::Rectangle Down(10, 225, 440, 5);
				 g->FillRectangle(blackBrush, Down);

				 space.set_Counter(1);
	}
private: System::Void Space00_Click(System::Object^  sender, System::EventArgs^  e) {
			 temp = space.get_Space00();
			 count = space.get_Counter();
			 if (temp == 0)
			 {
				 if (count % 2 != 0) //player x
				 {
					 g->DrawImage(img_X, 20, 20);
				 }
				 if (count % 2 == 0) //player o
				 {

				 }
			 }
}
};
}




/*
for next class
	fix arrays of spaces

space_button click temp::
	-getspace
	-if space == 0
		-draw x/o
		-setspace for player
		-counter++
	-if not
		message invaild
	-check for win

picturebox size
	460, 350

*/