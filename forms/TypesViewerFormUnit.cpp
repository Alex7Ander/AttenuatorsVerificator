//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TypesViewerFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TtypesViewerForm *typesViewerForm;
//---------------------------------------------------------------------------
__fastcall TtypesViewerForm::TtypesViewerForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TtypesViewerForm::newTypeButtonClick(TObject *Sender)
{
    NewTypeForm->Show();
}
//---------------------------------------------------------------------------
