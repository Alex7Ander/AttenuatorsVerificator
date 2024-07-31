//---------------------------------------------------------------------------
#pragma hdrstop
#include "DBConnectorUnit.h"
//---------------------------------------------------------------------------
bool DBConnector::connect(){
	try{
		connected = connectionForm->connect();
	}
	catch(Exception *exp){
		 connected = false;
	}
	return connected;
}

bool DBConnector::isConnected(){
    return connected;
}

void DBConnector::sendQuery(String sql){
	TFDQuery* query = new TFDQuery(NULL);
	query->Connection = connectionForm->FDConnection1;
	query->ExecSQL(sql);
	query->Close();
	query->DisposeOf();
}

void DBConnector::sendSelectQuery(String sql){
	TFDQuery* query = new TFDQuery(NULL);
	query->Connection = connectionForm->FDConnection1;
	query->SQL->Text = sql;
	query->Open();
	while (!query->Eof){
		//String tableName = query->Te //>FieldByName("name")->AsString;
		query->Next();
	}
	query->Close();
	query->DisposeOf();
}


#pragma package(smart_init)
