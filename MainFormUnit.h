//---------------------------------------------------------------------------

#ifndef MainFormUnitH
#define MainFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>

#include "TypesViewerFormUnit.h"
#include "DataModuleUnit.h"
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *NewTypeMainMenuBtn;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	TMenuItem *N12;
	TPanel *headPanel1;
	TPanel *leftPanel;
	TDataSource *TypesDataSource;
	TGroupBox *StatusGroupBox;
	TLabel *dbConnectionStatusLabel;
	TLabel *equipmentConnectionLabel;
	TPanel *bottomPanel;
	TPanel *centralPanel;
	TDBGrid *typesDBGrid;
	TDBNavigator *typesDBNavigator;
	TPanel *rightPanel;
	void __fastcall NewTypeMainMenuBtnClick(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);

    void setDBConnectionStatus(bool status);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
