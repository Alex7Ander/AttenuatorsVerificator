//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "MainFormUnit.h"
#include "NewTypeFormUnit.h"
#include "dbConnectionFormUnit.h"
#include "equipmentConnectionFormUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TMainForm::setDBConnectionStatus(bool status) {
	if(status){
		dbConnectionStatusLabel->Font->Color=clGreen;
		dbConnectionStatusLabel->Caption = "База данных подключена";
	}
	else{
		dbConnectionStatusLabel->Font->Color=clRed;
        dbConnectionStatusLabel->Caption = "Подключение к базе данных отсутсвует";
    }
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::NewTypeMainMenuBtnClick(TObject *Sender)
{
    NewTypeForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::N3Click(TObject *Sender)
{
	dbConnectionForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N4Click(TObject *Sender)
{
	equipmentConnectionForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormShow(TObject *Sender)
{
	//setDBConnectionStatus(dbConnectionForm->connect());
	DataModule1->AttenuatorsverificatorConnection->Connected = true;
    DataModule1->TypesTable->Active = true;
	if(DataModule1->AttenuatorsverificatorConnection->Connected){
		setDBConnectionStatus(true);
	}
	else{
        setDBConnectionStatus(false);
    }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N5Click(TObject *Sender)
{
	typesViewerForm->Show();
}
//---------------------------------------------------------------------------



