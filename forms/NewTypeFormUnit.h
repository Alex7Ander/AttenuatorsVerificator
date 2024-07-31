//---------------------------------------------------------------------------

#ifndef NewTypeFormUnitH
#define NewTypeFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

#include "DeviceUnit.h"
#include "dbConnectionFormUnit.h"
#include "RepositoryUnit.h"
//---------------------------------------------------------------------------

class TNewTypeForm : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *mainGroupBox;
	TEdit *typeNameEdit;
	TLabel *typeNameLabel;
	TEdit *typeDesignationEdit;
	TEdit *typeRegistryNumberEdit;
	TLabel *typeDesignationLabel;
	TLabel *typeRegistryNumberEditLabel;
	TButton *saveButton;
	TLabel *connectorTypeLabel;
	TComboBox *connectorTypeComboBox;
	TLabel *freqRangeLabel;
	TLabel *fromLabel;
	TEdit *startFreqEdit;
	TLabel *toLabel;
	TEdit *stopFreqEdit;
	TLabel *gHzLabel;
	TLabel *commentLabel;
	TMemo *commentMemo;
	void __fastcall saveButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TNewTypeForm(TComponent* Owner);
};



//---------------------------------------------------------------------------
extern PACKAGE TNewTypeForm *NewTypeForm;
//---------------------------------------------------------------------------
#endif
