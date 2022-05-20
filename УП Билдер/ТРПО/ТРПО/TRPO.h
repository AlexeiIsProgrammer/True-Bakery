//---------------------------------------------------------------------------

#ifndef TRPOH
#define TRPOH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm15 : public TForm
{
__published:	// IDE-managed Components
	TButton *RegButton;
	TButton *InButton;
	TADOQuery *ADOQuery1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TEdit *login;
	TEdit *pass;
	TButton *InAcc;
	TButton *RegAcc;
	TEdit *reppass;
	TButton *Back;
	TSpeedButton *eye1;
	TSpeedButton *eye2;
	TImage *Image1;
	void __fastcall RegButtonClick(TObject *Sender);
	void __fastcall InButtonClick(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
	void __fastcall InAccClick(TObject *Sender);
	void __fastcall RegAccClick(TObject *Sender);
	void __fastcall eye1MouseLeave(TObject *Sender);
	void __fastcall eye1MouseEnter(TObject *Sender);
	void __fastcall eye2MouseLeave(TObject *Sender);
	void __fastcall eye2MouseEnter(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm15(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm15 *Form15;
//---------------------------------------------------------------------------
#endif
