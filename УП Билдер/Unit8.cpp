//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit5.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TChange *Change;
//---------------------------------------------------------------------------
__fastcall TChange::TChange(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TChange::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TChange::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key == 13)
	{
		Edit1->Visible=false;
        Image3->Visible=false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TChange::Image2Click(TObject *Sender)
{

		TLocateOptions Options;
		if (Edit1->Text!="")
		{
			Form4->ADOQuery1->Close();
			Form4->ADOQuery1->SQL->Clear();
			Form4->ADOQuery1->SQL->Add("DELETE * FROM ������� where [��� ������]="+Edit1->Text);
			Form4->ADOQuery1->ExecSQL();
			//Form4->ADOQuery1->First();
			/*while(!Form4->ADOQuery1->Eof)
			{
				if(Form4->ADOQuery1->FieldByName("��� ������")->AsInteger == StrToInt(Edit1->Text))
				{
					Form4->ADOQuery1->Delete();
					Form4->ADOQuery1->Post();
					Form4->ADOQuery1->Close();
					Form4->ADOQuery1->ExecSQL();
					Form4->ADOQuery1->First();
				}
				Form4->ADOQuery1->Next();
			} */
			//Form4->ADOQuery1->Close();
            //Form4->ADOQuery1->ExecSQL();

				//Form4->ADOQuery1->SQL->Text= "SELECT * FROM [�������]";
		   //	Form4->ADOQuery1->Active = false;
			//Form4->ADOQuery1->Active = true;

		/*Form4->ADOQuery1->Close();
		Form4->ADOQuery1->SQL->Clear();
		Form4->ADOQuery1->SQL->Add("Delete ������� where [��� ������] = :P1");
		Form4->ADOQuery1->Parameters->ParamByName("P1")->Value = Edit1->Text;
		Form4->ADOQuery1->ExecSQL();
//        OtdelADOQuery1->Close();  - ������
		Form4->ADOQuery1->SQL->Clear();
		Form4->ADOQuery1->SQL->Add("select *");
		Form4->ADOQuery1->SQL->Add("from �������");
		Form4->ADOQuery1->Open();    */
			   //Form4->ADOQuery1->SQL->Text = "DELETE FROM [�������] WHERE [��� ������]="+Edit1->Text;

				//Form4->ADOQuery1->Active = true;
				//Form4->ADOQuery1->First();





			Form4->ADOQuery1->SQL->Text= "SELECT * FROM [�����]";
			Form4->ADOQuery1->Active = false;
			Form4->ADOQuery1->Active = true;

			 if(Form4->ADOQuery1->Locate("��� ������",Edit1->Text, Options))
			 {
			  Form4->ADOQuery1->Delete();
			  ShowMessage("������� �������!");
              Change->Close();
			  Form5->Show();
			 }
			 else
			 {
				 ShowMessage("NEMA");
				 return;
			 }

		}
		else
		{
			ShowMessage("������� ��� ������!");
		}
}
//---------------------------------------------------------------------------


void __fastcall TChange::Image2MouseEnter(TObject *Sender)
{
   Image2->Picture->LoadFromFile("��������� �������.png");
}
//---------------------------------------------------------------------------

void __fastcall TChange::Image2MouseLeave(TObject *Sender)
{
	Image2->Picture->LoadFromFile("���������.png");
}
//---------------------------------------------------------------------------

