//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dbConnectionFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TdbConnectionForm *dbConnectionForm;
//---------------------------------------------------------------------------
__fastcall TdbConnectionForm::TdbConnectionForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TdbConnectionForm::dbFilePathButtonClick(TObject *Sender)
{
	if(dbFileOpenDialog->Execute()){
		dbFilePath = dbFileOpenDialog->FileName;
		filePathLabel->Caption = dbFilePath;
	}
}
//---------------------------------------------------------------------------