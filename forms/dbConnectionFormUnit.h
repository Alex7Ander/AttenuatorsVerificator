//---------------------------------------------------------------------------

#ifndef dbConnectionFormUnitH
#define dbConnectionFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TdbConnectionForm : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *dbGroupBox;
	TLabel *filePathBannerLabel;
	TLabel *filePathLabel;
	TButton *dbFilePathButton;
	TFileOpenDialog *dbFileOpenDialog;
	void __fastcall dbFilePathButtonClick(TObject *Sender);
private:	// User declarations
    String dbFilePath;
public:		// User declarations
	__fastcall TdbConnectionForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdbConnectionForm *dbConnectionForm;
//---------------------------------------------------------------------------
#endif
