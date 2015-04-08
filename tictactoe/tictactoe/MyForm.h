#pragma once
#include "Conrtoller.h"

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
	private: System::Windows::Forms::MenuStrip^  MenuBar;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  aToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

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
			this->MenuBar = (gcnew System::Windows::Forms::MenuStrip());
			this->aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MenuBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MenuBar
			// 
			this->MenuBar->BackColor = System::Drawing::SystemColors::ControlDark;
			this->MenuBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aToolStripMenuItem });
			this->MenuBar->Location = System::Drawing::Point(0, 0);
			this->MenuBar->Name = L"MenuBar";
			this->MenuBar->Size = System::Drawing::Size(584, 24);
			this->MenuBar->TabIndex = 0;
			this->MenuBar->Text = L"menuStrip1";
			// 
			// aToolStripMenuItem
			// 
			this->aToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			this->aToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->aToolStripMenuItem->Name = L"aToolStripMenuItem";
			this->aToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->aToolStripMenuItem->Text = L"Menu";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(584, 584);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::M_Click);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::M);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 608);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MenuBar);
			this->MainMenuStrip = this->MenuBar;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MenuBar->ResumeLayout(false);
			this->MenuBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		array <controller^, 2>^ CellArray;

		Graphics^ g;
		Pen^ BlackPen;
		Brush^ WhiteBrush;
		Brush^ GreyBrush;
		Bitmap^ X = gcnew Bitmap("Graphics/X.bmp");
		Bitmap^ O = gcnew Bitmap("Graphics/O.bmp");

		/*
		int height = pictureBox1->Height;
		int cell_height = height / 3;
		int width = pictureBox1->Width;
		int cell_width = width / 3;
		*/
		
		int width = 584;
		int height = 584;
		int cell_height = height / 3;
		int cell_width = width / 3;
		

		controller control;


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 g = pictureBox1->CreateGraphics();
				 BlackPen = gcnew System::Drawing::Pen(Color::Black);
				 WhiteBrush = gcnew System::Drawing::SolidBrush(Color::White);
				 GreyBrush = gcnew System::Drawing::SolidBrush(Color::SandyBrown);

				 CellArray = gcnew array <controller^, 2>(3, 3);
				 for (int row = 0; row < 3; row++){
					 for (int col = 0; col < 3; col++){
						 CellArray[row, col] = gcnew controller(0, 0);
					 }
				 }

	}
	private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Refresh();
				 control.setStart(true);

				 control.setCount(0);

				 drawGrid();
				 
				 
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void M(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {


			 /*
			 bool shouldDraw = control.getStart();

			 /*
			 int new_x = e->X - (e->X % LRGCELLSIZE);
			 int new_y = e->Y - (e->Y % LRGCELLSIZE);

			 if (new_x >= LRGCELLSIZE && new_y >= LRGCELLSIZE){
			 Rectangle WhiteRect = Rectangle(new_x + 1, new_y + 1, LRGCELLSIZE - 1, LRGCELLSIZE - 1);
			 g->DrawImage(starfieldgrid_png, 0, 0, LrgGridSize, LrgGridSize);
			 g->FillRectangle(WhiteBrush, WhiteRect);
			 }

			 


			 int ax;
			 int ay;


			 int x = e->X - (e->X % cell_height);
			 int y = e->Y - (e->Y % cell_height);

			 if (x < 582 && y < 582){
				 ax = x / cell_height;
				 ay = y / cell_height;
			 }
			 else if (e->X >= 582){
				 ax = 2;
			 }
			 else if (e->Y >= 582){
				 ay = 2;
			 }

			 CellArray[ax, ay]->setStat(3);
			 int status = CellArray[ax, ay]->getStat();


			 if (shouldDraw && status == 3){
				 RefreshGrid();
				 Rectangle tempRect = Rectangle(ax * cell_height, ay * cell_height, cell_height - 1, cell_height - 1);
				 g->FillRectangle(GreyBrush, tempRect);

			 }

			 */
}


private: System::Void M_Click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 int move = control.getCount();

			 int x = e->X - (e->X % cell_height);
			 int y = e->Y - (e->Y % cell_height);

			 int ax;
			 int ay;
			 if (x < 582 && y < 582){
				 ax = x / cell_height;
				 ay = y / cell_height;
			 }
			 else if (e->X >= 582){
				 ax = 2;
			 }
			 else if (e->Y >= 582){
				 ay = 2;
			 }


			 int status = CellArray[ax, ay]->getStat();

			 if (control.getStart() /*&& status == 0 && status != 3*/){

				 if (control.getCount() == 0){
					 g->DrawImage(X, x + 1, y + 1, cell_height - 2, cell_height - 2);
					 control.setCount(move + 1);
				 }
				 else if (control.getCount() == 1){
					 g->DrawImage(O, x + 1, y + 1, cell_height - 2, cell_height - 2);
					 control.setCount(move - 1);
				 }

			 }



}

System::Void drawGrid(){

			 for (int row = 0; row < 3; row++){
				 for (int col = 0; col < 3; col++){

					 int x = row * cell_width;
					 int y = col * cell_height;

					 Rectangle gridRect = Rectangle(x, y, cell_height, cell_height);
					 g->DrawRectangle(BlackPen, gridRect);
				 }
			 }

}
System::Void RefreshGrid(){

	for (int row = 0; row < 3; row++){
		for (int col = 0; col < 3; col++){

			int x = row * cell_width;
			int y = col * cell_height;

			Rectangle gridRect = Rectangle(x, y, cell_height - 1, cell_height - 1);
			g->DrawRectangle(BlackPen, gridRect);
			g->FillRectangle(WhiteBrush, gridRect);
		}
	}

}

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Close();
}
};
}
