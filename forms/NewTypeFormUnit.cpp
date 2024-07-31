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
void __fastcall TNewTypeForm::saveButtonClick(TObject *Sender)
{
	String name = typeNameEdit->Text;
	String designation = typeDesignationEdit->Text;
	String registryNumber = typeRegistryNumberEdit->Text;
	String connectorType = connectorTypeComboBox->Text;
	double startFreq = StrToFloat(startFreqEdit->Text);
	double stopFreq = StrToFloat(stopFreqEdit->Text);
	String comment = commentMemo->Text;

	DeviceType *newType = new DeviceType(name, designation, registryNumber, connectorType, startFreq, stopFreq, comment);
	DBConnector *connector = new DBConnector(dbConnectionForm);
	DeviceTypeRepository *typeRepo = new DeviceTypeRepository(connector);

	try{
	   typeRepo->save(newType);
	   ShowMessage("Успешное сохранение");
       this->Close();
	}
	catch(Exception *exp){
		ShowMessage("Ошибка при сохранении");
	}
}
//---------------------------------------------------------------------------
