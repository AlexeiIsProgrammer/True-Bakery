//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "main.h"
#include "TRPO.h"
#include "AddStudent.h"
#include "StudentInfo.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm15 *Form15;
//---------------------------------------------------------------------------
__fastcall TForm15::TForm15(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
extern int mode;
String logg,wordd, password_1;
void __fastcall TForm15::RegButtonClick(TObject *Sender)
{
	Form15->Caption="�����������";
	eye1->Visible=true;
	eye2->Visible=true;
	RegButton->Visible=false;
	InButton->Visible=false;
	RegAcc->Visible=true;
	login->Visible=true;
	pass->Visible=true;
	reppass->Visible=true;
	Back->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm15::InButtonClick(TObject *Sender)
{
	Form15->Caption="���� � �������";
	eye1->Visible=true;
	login->Visible=true;
	pass->Visible=true;
	InAcc->Visible = true;
	RegButton->Visible = false;
	InButton->Visible = false;
    Back->Visible=true;
}
//---------------------------------------------------------------------------





void __fastcall TForm15::BackClick(TObject *Sender)
{
	Form15->Caption="������� ���� ����� � �������";
	RegAcc->Visible = false;
	InAcc->Visible = false;
	login->Visible=false;
	pass->Visible=false;
	reppass->Visible=false;
	Back->Visible=false;
	RegButton->Visible=true;
	InButton->Visible=true;
	eye1->Visible=false;
	eye2->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm15::InAccClick(TObject *Sender)
{
	if(login->Text=="" || pass->Text=="")
	 {
	  Application->Title="������!";
	  ShowMessage("����������, ��������� ��� ���� ��� �����������.");
	 }
	 else
	 {
		  logg=login->Text;
		  wordd=pass->Text;
		  bool flag=false;
		  ADOQuery1->First();
		  while(!ADOQuery1->Eof)
		  {
			   if(ADOQuery1->FieldByName("�����")->AsString==logg)
			   {
				flag=true;
				break;
			   }
			   ADOQuery1->Next();
		  }
		  if(!flag)
		  {
		   Application->Title="������!";
		   ShowMessage("�������� ����� ��� ������!");
		   pass->Clear();
		  }
		  else
		  {
			   if(ADOQuery1->FieldByName("������")->AsString==wordd)
			   {
				Form15->Hide();
				Form1->Show();
			   }
			   else
			   {
				Application->Title="������!";
				ShowMessage("�������� ����� ��� ������!");
				pass->Clear();
			   }
		  }

	 }


}
//---------------------------------------------------------------------------

void __fastcall TForm15::RegAccClick(TObject *Sender)
{
    if (pass->Text == "" || reppass->Text == "" || login->Text == "" )
	 {
		Application->Title = "������!";
		ShowMessage("����������, ��������� ��� ���� ��� �����������.");
	}
	else
	{
		logg = login->Text;
		wordd = pass->Text;
		password_1 = reppass->Text;

		if (wordd != password_1) {
			Application->Title = "������!";
			ShowMessage("��������� ���� ������ �� ���������.");
			reppass->Clear();
		}
		else {
			bool flag = false;
			while (!ADOQuery1->Eof) {
				if (ADOQuery1->FieldByName("�����")->AsString == logg)
					flag = true;
				ADOQuery1->Next();
			}

			if (flag == true)
			{
				Application->Title = "������!";
				ShowMessage("������ ����� ��� ��������������� ������ �������������.");
				login->Clear();
				pass->Clear();
				reppass->Clear();
			}
			else
			{
				ADOQuery1->Insert();
				ADOQuery1->FieldByName("�����")->AsString = logg;
				ADOQuery1->FieldByName("������")->AsString = wordd;
				ADOQuery1->FieldByName("�������������")->AsInteger = 0;
				ADOQuery1->Post();
				ADOQuery1->Last();
                ShowMessage("�� ������� ������������������");
				Form15->Caption="������� ���� ����� � �������";
				eye1->Visible=false;
				eye2->Visible=false;
				RegAcc->Visible = false;
				InAcc->Visible = false;
				login->Visible=false;
				pass->Visible=false;
				reppass->Visible=false;
				Back->Visible=false;
				RegButton->Visible=true;
				InButton->Visible=true;
                login->Clear();
				pass->Clear();
				reppass->Clear();
			}
		}
	}

}
//---------------------------------------------------------------------------


void __fastcall TForm15::eye1MouseLeave(TObject *Sender)
{
	 pass->PasswordChar='*';
}
//---------------------------------------------------------------------------

void __fastcall TForm15::eye1MouseEnter(TObject *Sender)
{
	  pass->PasswordChar='\0';
}
//---------------------------------------------------------------------------


void __fastcall TForm15::eye2MouseLeave(TObject *Sender)
{
   reppass->PasswordChar='*';
}
//---------------------------------------------------------------------------

void __fastcall TForm15::eye2MouseEnter(TObject *Sender)
{
	 reppass->PasswordChar='\0';
}
//---------------------------------------------------------------------------




void __fastcall TForm15::FormCreate(TObject *Sender)
{
	Image1->Left=0;
	Image1->Top=0;
	Image1->Width = Form15->ClientWidth;
    Image1->Height = Form15->ClientHeight;
}
//---------------------------------------------------------------------------

