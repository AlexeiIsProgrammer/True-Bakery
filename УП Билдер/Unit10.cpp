//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "TRPO.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button1Click(TObject *Sender)
{

	Form15->Show();
    Form10->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormClose(TObject *Sender, TCloseAction &Action)
{

	Form15->Show();
	Form10->Hide();
}
//---------------------------------------------------------------------------

