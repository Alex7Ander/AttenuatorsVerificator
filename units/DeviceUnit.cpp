//---------------------------------------------------------------------------
#pragma hdrstop
#include "DeviceUnit.h"
//---------------------------------------------------------------------------
DeviceType::DeviceType(String name,
							String designation,
							String registryNumber,
							String connectorType,
							double startFreq,
							double stopFreq){
 this->name = name;
 this->designation = designation;
 this->registryNumber = registryNumber;
 this->connectorType = connectorType;
 this->stopFreq = stopFreq;
 this->startFreq = startFreq;
}

#pragma package(smart_init)
