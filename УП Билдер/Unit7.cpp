//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit5.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAdd *Add;
//---------------------------------------------------------------------------
__fastcall TAdd::TAdd(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdd::FormClose(TObject *Sender, TCloseAction &Action)
{
	Memo1->Clear();
    Memo2->Clear();
	Form5->Show();
}
//---------------------------------------------------------------------------
void __fastcall TAdd::Image2Click(TObject *Sender)
{
	if(Edit1->Text!="" && Edit2->Text!="" && Memo1->Lines->Count > 0 && Memo2->Lines->Count > 0)
	{

		Form4->ADOQuery1->SQL->Text= "SELECT * FROM ???????";
		Form4->ADOQuery1->Active = false;
		Form4->ADOQuery1->Active = true;

		for(int i=0;i<Memo1->Lines->Count;i++)
		{
			Form4->ADOQuery1->Insert();
			Form4->ADOQuery1->FieldByName("??? ??????")->AsInteger = StrToInt(Edit2->Text);
			Form4->ADOQuery1->FieldByName("???????????? ???????")->AsString = Memo1->Lines->Strings[i];
			Form4->ADOQuery1->FieldByName("?????????? ???????")->AsInteger = StrToInt(Memo2->Lines->Strings[i]);
			Form4->ADOQuery1->Post();
		}

		Memo1->Clear();
		Memo2->Clear();

		Form4->ADOQuery1->SQL->Text= "SELECT * FROM ?????";
		Form4->ADOQuery1->Active = false;
		Form4->ADOQuery1->Active = true;

		bool y=true;
		Form4->ADOQuery1->First();
		while(!Form4->ADOQuery1->Eof)
		{

			if(Form4->ADOQuery1->FieldByName("??? ??????")->AsInteger == StrToInt(Edit2->Text))
			{
				y=false;
				break;
			}
			Form4->ADOQuery1->Next();
		}
		if(y)
		{
			Form4->ADOQuery1->Insert();
			Form4->ADOQuery1->FieldByName("??? ?????????")->AsString = Edit1->Text;
			Form4->ADOQuery1->FieldByName("??? ??????")->AsInteger = StrToInt(Edit2->Text);
			Form4->ADOQuery1->Post();
			ShowMessage("????? ??????? ????????!");
		}
		else
		{
			ShowMessage("????? ? ????? ????? ??? ????!");
        }

		Edit1->Clear();
		Edit2->Clear();
        ComboBox1->Clear();

		Form5->Show();
		Add->Close();

	}
	else
	{
        ShowMessage("????????? ?? ??? ??????!");
    }

}
//---------------------------------------------------------------------------





void __fastcall TAdd::FormActivate(TObject *Sender)
{
	Form4->ADOQuery1->SQL->Text = "SELECT * FROM [?????_???????]";
	Form4->ADOQuery1->Active = false;
	Form4->ADOQuery1->Active = true;
	Form4->ADOQuery1->First();
	while(!Form4->ADOQuery1->Eof)
	{
		ComboBox1->Items->Add(Form4->ADOQuery1->FieldByName("????????????")->AsString);
		Form4->ADOQuery1->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TAdd::Button1Click(TObject *Sender)
{
	if(ComboBox1->ItemIndex!=-1 && StrToInt(Edit3->Text)>0)
	{
		Memo1->Lines->Add(ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
		Memo2->Lines->Add(Edit3->Text);
		Edit3->Text = "0";
		ComboBox1->ItemIndex=-1;
	}
}
//---------------------------------------------------------------------------


void __fastcall TAdd::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (isdigit(Key) || (Key == VK_BACK)) { return; }
    Key=0;
}
//---------------------------------------------------------------------------

void __fastcall TAdd::Image2MouseLeave(TObject *Sender)
{
	 Image2->Picture->LoadFromFile("??????.png");
}
//---------------------------------------------------------------------------


void __fastcall TAdd::Image2MouseEnter(TObject *Sender)
{
	Image2->Picture->LoadFromFile("?????? ???????? ???????.png");
}
//---------------------------------------------------------------------------



