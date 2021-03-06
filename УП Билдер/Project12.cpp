//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit7.cpp", Add);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit5.cpp", Form5);
USEFORM("Unit8.cpp", Change);
USEFORM("Unit9.cpp", Form9);
USEFORM("..\..\????\????\main.cpp", Form1);
USEFORM("..\..\????\????\AddStudent.cpp", Form2);
USEFORM("..\..\????\????\StudentInfo.cpp", Form3);
USEFORM("Unit4.cpp", Form4);
USEFORM("..\..\????\????\TRPO.cpp", Form15);
USEFORM("Unit10.cpp", Form10);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm15), &Form15);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TAdd), &Add);
		Application->CreateForm(__classid(TChange), &Change);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
