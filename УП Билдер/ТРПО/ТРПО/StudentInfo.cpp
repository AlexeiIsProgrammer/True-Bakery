//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "main.h"
#include "TRPO.h"
#include "AddStudent.h"
#include "StudentInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
extern int sele;
extern int mode;
void __fastcall TForm3::nextClick(TObject *Sender)
{
	Form1->ADOQuery1->Next();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::backClick(TObject *Sender)
{
	Form1->ADOQuery1->Prior();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormActivate(TObject *Sender)
{
   	date->Text = FormatDateTime("dd.mm.yyyy", Date());
	Form1->ADOQuery1->First();
	while(!Form1->ADOQuery1->Eof)
	{
		if(Form1->ADOQuery1->FieldByName("�����")->AsInteger==sele)
		{
		   break;
		}
		Form1->ADOQuery1->Next();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::changeClick(TObject *Sender)
{
	delet->Enabled=false;
	close->Enabled=false;
	change->Enabled=false;
	next->Enabled=false;
	back->Enabled=false;
	save->Enabled=true;
	sex->ReadOnly=false;
	date->ReadOnly=false;
	otch->ReadOnly=false;
	fam->ReadOnly=false;
	name->ReadOnly=false;
	spec->ReadOnly=false;
	year->ReadOnly=false;
	cource->ReadOnly=false;
	ball->ReadOnly=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::saveClick(TObject *Sender)
{
	if(name->Text!="" &&fam->Text!=""&&otch->Text!=""&&date->Text!=""&&ball->Text!="")
			{
			   Form1->ADOQuery1->Edit();
			   Form1->ADOQuery1->Fields->FieldByName("�������")->AsString=fam->Text;
			   Form1->ADOQuery1->Fields->FieldByName("���")->AsString=name->Text;
			   Form1->ADOQuery1->Fields->FieldByName("��������")->AsString=otch->Text;
			   Form1->ADOQuery1->Fields->FieldByName("����")->AsInteger=StrToInt(cource->Items->Strings[cource->ItemIndex]);
			   Form1->ADOQuery1->Fields->FieldByName("���")->AsString=sex->Items->Strings[sex->ItemIndex];
			   Form1->ADOQuery1->Fields->FieldByName("���� ��������")->AsString=date->Text;
			   Form1->ADOQuery1->Fields->FieldByName("�������������")->AsString=spec->Items->Strings[spec->ItemIndex];
			   Form1->ADOQuery1->Fields->FieldByName("��� �����������")->AsInteger=StrToInt(year->Items->Strings[year->ItemIndex]);
			   Form1->ADOQuery1->Fields->FieldByName("������� ����")->AsFloat=StrToFloat(ball->Text);
			   Form1->ADOQuery1->Post();
               close->Enabled=true;
				change->Enabled=true;
				next->Enabled=true;
				back->Enabled=true;
				save->Enabled=false;
				sex->ReadOnly=true;
				date->ReadOnly=true;
				otch->ReadOnly=true;
				fam->ReadOnly=true;
				name->ReadOnly=true;
				spec->ReadOnly=true;
				year->ReadOnly=true;
				cource->ReadOnly=true;
				ball->ReadOnly=true;
                delet->Enabled=true;
			}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ballKeyPress(TObject *Sender, System::WideChar &Key)
{
if (isdigit(Key) || (Key == VK_BACK)) { return; }

//��������� ����� � BackSace

else if ((Key =='-' || Key=='+') &&

(ball->Text.Length()==0)) return;

//���� ����� ����� ������� ������ � ������ ������� ����

if (Key == '.' || Key ==',' ) {

Key=FormatSettings.DecimalSeparator;

if (ball->Text.Pos(Key)!=0) Key=0;

//��� ���� ����������� - ������ �������

else return;

}

Key = 0;
}
//---------------------------------------------------------------------------



void __fastcall TForm3::deletClick(TObject *Sender)
{
	Form1->ADOQuery1->Delete();
	Form1->ADOQuery1->Active=false;
    Form1->ADOQuery1->SQL->Text="select * from ����";
	Form1->ADOQuery1->Active=true;
	Form3->Close();
	Form1->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm3::closeClick(TObject *Sender)
{
    Form3->Close();
	Form1->Show();
}
//---------------------------------------------------------------------------

