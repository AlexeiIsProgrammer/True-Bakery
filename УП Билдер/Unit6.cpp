//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit5.h"
#include "Unit4.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form5->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image3Click(TObject *Sender)
{

	Form4->ADOQuery1->SQL->Text = "SELECT * FROM ?????";

	Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->Active = true;

	Form9->DBGrid1->Columns->Items[0]->Width=400;
	Form9->DBGrid1->Columns->Items[1]->Width=350;

	Form9->Show();
	Form6->Hide();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image4Click(TObject *Sender)
{

	Form4->ADOQuery1->SQL->Text = "SELECT * FROM ??????????";
	Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->Active = true;

	Form9->DBGrid1->Columns->Items[0]->Width=120;
	Form9->DBGrid1->Columns->Items[1]->Width=100;
	Form9->DBGrid1->Columns->Items[2]->Width=100;
	Form9->DBGrid1->Columns->Items[3]->Width=140;
	Form9->DBGrid1->Columns->Items[4]->Width=180;
	Form9->DBGrid1->Columns->Items[5]->Width=150;


	Form9->Show();
	Form6->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image2Click(TObject *Sender)
{

	Form4->ADOQuery1->SQL->Text = "SELECT * FROM ?????????";
	Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->Active = true;
	Form9->DBGrid1->Columns->Items[0]->Width=390;
	Form9->DBGrid1->Columns->Items[1]->Width=370;
	Form9->Show();
	Form6->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image5Click(TObject *Sender)
{
	Form4->ADOQuery1->SQL->Text = "SELECT * FROM ???????";
    Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->Active = true;
	Form9->DBGrid1->Columns->Items[0]->Width=250;
	Form9->DBGrid1->Columns->Items[1]->Width=250;
	Form9->DBGrid1->Columns->Items[2]->Width=250;
	Form9->Show();
	Form6->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image3MouseEnter(TObject *Sender)
{
	//Image3->Picture->LoadFromFile("?? ??????? ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image3MouseLeave(TObject *Sender)
{
	//Image3->Picture->LoadFromFile("?? ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image4MouseEnter(TObject *Sender)
{
	 //Image4->Picture->LoadFromFile("?? ??????????? ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image4MouseLeave(TObject *Sender)
{
	 //Image4->Picture->LoadFromFile("?? ???????????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image2MouseLeave(TObject *Sender)
{
	//Image2->Picture->LoadFromFile("?? ?????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image2MouseEnter(TObject *Sender)
{
	//Image2->Picture->LoadFromFile("?? ????? ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image5MouseEnter(TObject *Sender)
{
	//Image5->Picture->LoadFromFile("?? ??????? ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image5MouseLeave(TObject *Sender)
{
	//Image5->Picture->LoadFromFile("?? ???????.png");
}
//---------------------------------------------------------------------------

