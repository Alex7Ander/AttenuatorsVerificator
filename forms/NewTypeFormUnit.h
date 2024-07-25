//---------------------------------------------------------------------------

#ifndef NewTypeFormUnitH
#define NewTypeFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TNewTypeForm : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TEdit *NewTypeNameEdit;
	TLabel *Label1;
	TEdit *NewTypeDesignationEdit;
	TEdit *NewTypeRegistryNumberEdit;
	TLabel *Label2;
	TLabel *Label3;
	TButton *SaveButton;
	void __fastcall SaveButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TNewTypeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNewTypeForm *NewTypeForm;
//---------------------------------------------------------------------------
#endif