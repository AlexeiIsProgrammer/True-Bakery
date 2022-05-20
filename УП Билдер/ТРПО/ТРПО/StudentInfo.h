//---------------------------------------------------------------------------

#ifndef StudentInfoH
#define StudentInfoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *change;
	TButton *save;
	TDBEdit *name;
	TDBEdit *fam;
	TDBEdit *otch;
	TLabel *���;
	TLabel *Label2;
	TLabel *Head;
	TLabel *�������;
	TLabel *��������;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TDBEdit *date;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TDBEdit *ball;
	TButton *next;
	TButton *back;
	TDBComboBox *sex;
	TDBComboBox *spec;
	TDBComboBox *year;
	TDBComboBox *cource;
	TButton *close;
	TButton *delet;
	void __fastcall nextClick(TObject *Sender);
	void __fastcall backClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall changeClick(TObject *Sender);
	void __fastcall saveClick(TObject *Sender);
	void __fastcall ballKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall deletClick(TObject *Sender);
	void __fastcall closeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
