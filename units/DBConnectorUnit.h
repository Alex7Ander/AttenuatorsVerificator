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
	DBConnector();
	DBConnector(TdbConnectionForm* connectionForm) {this->connectionForm = connectionForm;}

	void setConnectionForm(TdbConnectionForm* form){connectionForm = form;}

	bool connect();
	bool isConnected();

	//send query
	void sendQuery(String sql);
	void sendSelectQuery(String sql);
	void sendSelectQuery(String sql, std::vector<std::vector<String>> answer);

};
//---------------------------------------------------------------------------
#endif
