//---------------------------------------------------------------------------

#ifndef dbConnectionFormUnitH
#define dbConnectionFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.Phys.SQLiteWrapper.Stat.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <vector>

//---------------------------------------------------------------------------
class TdbConnectionForm : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *dbGroupBox;
	TLabel *filePathBannerLabel;
	TLabel *filePathLabel;
	TButton *dbFilePathButton;
	TFileOpenDialog *dbFileOpenDialog;
	TFDConnection *FDConnection1;
	TFDPhysSQLiteDriverLink *FDPhysSQLiteDriverLink1;
	TMemo *connectionMemo;
	TButton *connectButton;
	void __fastcall dbFilePathButtonClick(TObject *Sender);
	void __fastcall connectButtonClick(TObject *Sender);
private:	// User declarations
    String dbFilePath;
public:		// User declarations
	__fastcall TdbConnectionForm(TComponent* Owner);
	bool connect();
	void sendQuery(String sql);
	void sendQuery(String sql, std::vector<String> answer);
	void sendQuery(String sql, std::vector<std::vector<String>> answer);
};
//---------------------------------------------------------------------------
extern PACKAGE TdbConnectionForm *dbConnectionForm;
//---------------------------------------------------------------------------
#endif
