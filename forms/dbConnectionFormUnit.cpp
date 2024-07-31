//---------------------------------------------------------------------------
#include <vcl.h>
#include <FireDAC.DApt.hpp>
#include <iostream>
#include <fstream>
#include <iomanip>
#pragma hdrstop
#include "dbConnectionFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TdbConnectionForm *dbConnectionForm;
//---------------------------------------------------------------------------
void TdbConnectionForm::readDBFailePath(){
	ifstream fin(".//files//dbFilePath.dat");
	char buff[512];
	fin.getline(buff, 512);
	fin.close();
	this->dbFilePath = buff;
	filePathLabel->Caption = dbFilePath;
}
//---------------------------------------------------------------------------
bool TdbConnectionForm::connect(){
	if(dbFilePath==""){
		return false;
	}
	/*
	FDConnection1->DriverName = "SQLITE";
	FDConnection1->Params->Values["Database"] = dbFilePath;
	try{
		FDConnection1->Open();
		connectionMemo->Lines->Add("---����������� �������---");
		TFDQuery* query = new TFDQuery(NULL);
		query->Connection = FDConnection1;
		query->SQL->Text = "SELECT name FROM sqlite_master WHERE type='table'";
		connectionMemo->Lines->Add("---������ ������ ��---");
		query->Open();
		while (!query->Eof){
			String tableName = query->FieldByName("name")->AsString;
			connectionMemo->Lines->Add(tableName);
			query->Next();
		}
		query->Close();
		connectionMemo->Lines->Add("---������ ��������---");
		query->DisposeOf();
        return true;
	}
	catch(EDatabaseError* exp){
		ShowMessage("������ ����������� � ��:" + exp->Message);
		connectionMemo->Font->Color = clRed;
		connectionMemo->Lines->Add("������ ����������� � ��:" + exp->Message);
		connectionMemo->Font->Color = clBlack;
		return false;
	}
	*/
    return true;
}

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
__fastcall TdbConnectionForm::TdbConnectionForm(TComponent* Owner)
	: TForm(Owner){
	readDBFailePath();

}
//---------------------------------------------------------------------------

void __fastcall TdbConnectionForm::dbFilePathButtonClick(TObject *Sender)
{
	if(dbFileOpenDialog->Execute()){
		dbFilePath = dbFileOpenDialog->FileName;
		filePathLabel->Caption = dbFilePath;
		ofstream fout;
		fout.open(".//files//dbFilePath.dat");
		fout << AnsiString(dbFilePath.c_str());
		fout.close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TdbConnectionForm::connectButtonClick(TObject *Sender)
{
    connectionMemo->Lines->Clear();
	connect();
}
//---------------------------------------------------------------------------


