//---------------------------------------------------------------------------

#ifndef TypesViewerFormUnitH
#define TypesViewerFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

#include "NewTypeFormUnit.h"
//---------------------------------------------------------------------------
class TtypesViewerForm : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *typesListGroupBox;
	TListBox *ListBox1;
	TGroupBox *mainInfoGroupBox;
	TButton *newTypeButton;
	TButton *saveButton;
	TLabel *Label1;
	void __fastcall newTypeButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TtypesViewerForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TtypesViewerForm *typesViewerForm;
//---------------------------------------------------------------------------
#endif
