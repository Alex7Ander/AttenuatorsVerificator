//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>

//---------------------------------------------------------------------------
USEFORM("..\MainFormUnit.cpp", MainForm);
USEFORM("dbConnectionFormUnit.cpp", dbConnectionForm);
USEFORM("equipmentConnectionFormUnit.cpp", equipmentConnectionForm);
USEFORM("NewTypeFormUnit.cpp", NewTypeForm);
USEFORM("TypesViewerFormUnit.cpp", typesViewerForm);
USEFORM("..\units\DataModuleUnit.cpp", DataModule1); /* TDataModule: File Type */
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TdbConnectionForm), &dbConnectionForm);
		Application->CreateForm(__classid(TNewTypeForm), &NewTypeForm);
		Application->CreateForm(__classid(TequipmentConnectionForm), &equipmentConnectionForm);
		Application->CreateForm(__classid(TtypesViewerForm), &typesViewerForm);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
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
