//---------------------------------------------------------------------------
#ifndef DBConnectorUnitH
#define DBConnectorUnitH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

#include "dbConnectionFormUnit.h"
#include "DeviceUnit.h"

class DBConnector{
private:
	TdbConnectionForm* connectionForm;
	bool connected;

public:
	DBConnector(TdbConnectionForm* connectionForm) {this->connectionForm = connectionForm;}
	bool connect();
	bool isConnected();
    void save(DeviceType *deviceType);

};
//---------------------------------------------------------------------------
#endif