//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "Unit10.h"
#include "Unit4.h"
#include "Unit5.h"
#include "TRPO.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Image2Click(TObject *Sender)
{
Form4->Hide();
	Form5->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form10->Hide();
	Form15->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image2MouseEnter(TObject *Sender)
{
	Image2->Picture->LoadFromFile("?????? ?????? (??????) ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image2MouseLeave(TObject *Sender)
{
	Image2->Picture->LoadFromFile("?????? ?????? (??????).png");
}
//---------------------------------------------------------------------------

