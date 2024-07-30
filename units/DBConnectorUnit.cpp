//---------------------------------------------------------------------------
#pragma hdrstop
#include "DBConnectorUnit.h"
//---------------------------------------------------------------------------

bool DBConnector::connect(){
    return this->connectionForm->connect();
}

bool DBConnector::isConnected(){
    return connected;
}

void DBConnector::save(DeviceType *deviceType){
	if(!connected){
        return;
	}
	String name = deviceType->getName();
	String designation = deviceType->getDesignation();
	String registryNumber = deviceType->getRegistryNumber();
	String connectorType = deviceType->getConnectorType();
	double startFreq = deviceType->getStartFreq();
	double stopFreq = deviceType->getStopFreq();
	String comment = deviceType->getComment();
	String sql = "INSERT INTO types [(name, designation, registryNumber, connectorTYpe, startFreq, stopFreq, comment)] VALUES ("+name+", "+designation+", "+registryNumber+", "+connectorType+", "+FloatToStr(startFreq)+", "+FloatToStr(stopFreq)+", "+comment+");";
	connectionForm->sendQuery(sql);
}

#pragma package(smart_init)