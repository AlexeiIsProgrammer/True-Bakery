//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "TRPO.h"
#include "main.h"
#include "AddStudent.h"
#include "StudentInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
extern int mode;
extern int sele=0;
void __fastcall TForm1::CheckClick(TObject *Sender)
{
	N1->Visible=true;
	Image1->Visible=false;
	Exit->Caption="�����";
    sbros->Visible=true;
	Label1->Visible=true;
	Label2->Visible=true;
	Label3->Visible=true;
	Label4->Visible=true;
	searchF->Visible=true;
	searchN->Visible=true;
	searchO->Visible=true;
	Check->Visible=false;
	add->Visible=true;
	DBCtrlGrid1->Visible=true;
	DBEdit1->Visible=true;
	DBEdit2->Visible=true;
	DBEdit3->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::addClick(TObject *Sender)
{
	Form1->Hide();
    Form2->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DBCtrlGrid1DblClick(TObject *Sender)
{
  sele = ADOQuery1->FieldByName("�����")->AsInteger;
  Form1->Hide();
  Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExitClick(TObject *Sender)
{
	if(Exit->Caption=="�����")
	{
		Form1->Close();
		Form15->Close();
	}
	if(Exit->Caption=="�����")
	{
        N1->Visible=false;
		Image1->Visible=true;
		Exit->Caption="�����";
		sbros->Visible=false;
		Label1->Visible=false;
		Label2->Visible=false;
		Label3->Visible=false;
		Label4->Visible=false;
		searchF->Visible=false;
		searchN->Visible=false;
		searchO->Visible=false;
		Check->Visible=true;
		add->Visible=false;
		DBCtrlGrid1->Visible=false;
		DBEdit1->Visible=false;
		DBEdit2->Visible=false;
		DBEdit3->Visible=false;
    }


}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormActivate(TObject *Sender)
{
	if(Form15->ADOQuery1->FieldByName("�������������")->AsInteger==0)
	{
	 add->Enabled=false;
	 Form3->change->Enabled=false;
	 Form3->delet->Enabled=false;
	}
	else
	{
		Form3->delet->Enabled=true;
	  add->Enabled=true;
      Form3->change->Enabled=true;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::searchNChange(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� where (��� LIKE '"+searchN->Text+"%') AND (������� LIKE '"+searchF->Text+"%') AND (�������� LIKE '"+searchO->Text+"%')";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::searchFChange(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� where (��� LIKE '"+searchN->Text+"%') AND (������� LIKE '"+searchF->Text+"%') AND (�������� LIKE '"+searchO->Text+"%')";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::searchOChange(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� where (��� LIKE '"+searchN->Text+"%') AND (������� LIKE '"+searchF->Text+"%') AND (�������� LIKE '"+searchO->Text+"%')";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sbrosClick(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ����";
	ADOQuery1->Active = true;
	searchF->Clear();
	searchO->Clear();
	searchN->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
   ADOQuery1->Active = false;
   ADOQuery1->SQL->Text = "select * from ���� ORDER BY [������� ����] DESC";
   ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� ORDER BY [������� ����] ASC";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� ORDER BY [�������] ASC";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� ORDER BY [���] ASC";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� ORDER BY [��������] ASC";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "select * from ���� ORDER BY [�������������] ASC";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Image1->Width=Form1->ClientWidth;
Image1->Height=Form1->ClientHeight;
Image1->Left=0;
Image1->Top=0;
}
//---------------------------------------------------------------------------


