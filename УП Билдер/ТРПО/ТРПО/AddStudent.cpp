//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "TRPO.h"
#include "AddStudent.h"
#include "main.h"
#include "StudentInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{

//Edit10->Text = FormatDateTime("dd.mm.yyyy", Date());
if(Edit1->Text!="" &&Edit2->Text!=""&&Edit4->Text!=""&&Edit3->Text!=""&&ComboBox1->ItemIndex!=-1&&ComboBox2->ItemIndex!=-1&&ComboBox3->ItemIndex!=-1&&ComboBox4->ItemIndex!=-1)
{
   ADOQuery1->Insert();
   ADOQuery1->Fields->FieldByName("�������")->AsString=Edit1->Text;
   ADOQuery1->Fields->FieldByName("���")->AsString=Edit2->Text;
   ADOQuery1->Fields->FieldByName("��������")->AsString=Edit3->Text;
   ADOQuery1->Fields->FieldByName("����")->AsInteger=StrToInt(ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
   ADOQuery1->Fields->FieldByName("���")->AsString=ComboBox1->Items->Strings[ComboBox1->ItemIndex];
   ADOQuery1->Fields->FieldByName("���� ��������")->AsString=CalendarPicker1->Date;
   ADOQuery1->Fields->FieldByName("�������������")->AsString=ComboBox4->Items->Strings[ComboBox4->ItemIndex];
   ADOQuery1->Fields->FieldByName("��� �����������")->AsInteger=StrToInt(ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
   ADOQuery1->Fields->FieldByName("������� ����")->AsFloat=StrToFloat(Edit4->Text);
   ADOQuery1->Post();

Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
ComboBox1->ItemIndex=-1;
ComboBox2->ItemIndex=-1;
ComboBox3->ItemIndex=-1;
ComboBox4->ItemIndex=-1;
Form1->ADOQuery1->Active=false;
Form1->ADOQuery1->Active=true;
Form2->Close();
Form1->Show();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
Edit4->MaxLength = 4;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
if (isdigit(Key) || (Key == VK_BACK)) { return; }

//��������� ����� � BackSace

else if ((Key =='-' || Key=='+') &&

(Edit4->Text.Length()==0)) return;

//���� ����� ����� ������� ������ � ������ ������� ����

if (Key == '.' || Key ==',' ) {

Key=FormatSettings.DecimalSeparator;

if (Edit4->Text.Pos(Key)!=0) Key=0;

//��� ���� ����������� - ������ �������

else return;

}

Key = 0; //�� ��������� ������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::cancelClick(TObject *Sender)
{
	Form2->Close();
    Form1->Show();
}
//---------------------------------------------------------------------------

