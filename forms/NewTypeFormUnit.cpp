//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NewTypeFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TNewTypeForm *NewTypeForm;
//---------------------------------------------------------------------------
__fastcall TNewTypeForm::TNewTypeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TNewTypeForm::SaveButtonClick(TObject *Sender)
{
//
}
//---------------------------------------------------------------------------