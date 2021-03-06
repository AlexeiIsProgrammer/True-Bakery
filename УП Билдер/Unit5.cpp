//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
extern int mode;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
bool prov = false;
void __fastcall TForm5::Image4Click(TObject *Sender)
{
	Form6->Show();
	Form5->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Image1Click(TObject *Sender)
{
	Add->Show();
	Form5->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Image3Click(TObject *Sender)
{
	Change->Show();
	Form5->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Image2Click(TObject *Sender)
{
    prov=true;
	Form5->Close();
    Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
	if(!prov)
	{
		Form4->Close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormActivate(TObject *Sender)
{
	prov = false;
	if(mode == 0)
	{
		Image4->Picture->LoadFromFile("???????? ?????????? ??????? ??????.tif");
	   Image4->Enabled = false;
	}
	if(mode==1)
	{
		Image4->Picture->LoadFromFile("???????? ??????????.tif");
       Image4->Enabled = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image1MouseLeave(TObject *Sender)
{
	Image1->Picture->LoadFromFile("???????? ?????.tif");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image1MouseEnter(TObject *Sender)
{
	Image1->Picture->LoadFromFile("???????? ????? ???????.tif");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image4MouseEnter(TObject *Sender)
{
	if(mode==1)
	{
       Image4->Picture->LoadFromFile("???????? ?????????? ???????.tif");
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image4MouseLeave(TObject *Sender)
{
    if(mode==1)
	{
	Image4->Picture->LoadFromFile("???????? ??????????.tif");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image2MouseLeave(TObject *Sender)
{
	 Image2->Picture->LoadFromFile("????? ? ????.tif");
}
//---------------------------------------------------------------------------


void __fastcall TForm5::Image2MouseEnter(TObject *Sender)
{
	 Image2->Picture->LoadFromFile("????? ? ??????? ???? ???????.tif");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image3MouseEnter(TObject *Sender)
{
	 Image3->Picture->LoadFromFile("delete_zakaz ???????.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Image3MouseLeave(TObject *Sender)
{
	 Image3->Picture->LoadFromFile("delete_zakaz.png");
}
//---------------------------------------------------------------------------

