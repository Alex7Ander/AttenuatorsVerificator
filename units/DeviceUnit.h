//---------------------------------------------------------------------------
#ifndef DeviceUnitH
#define DeviceUnitH

#include <System.Classes.hpp>

class DeviceType{
private:
	String name;
	String designation;
	String registryNumber;
	String connectorType;
	double startFreq;
	double stopFreq;

public:
	DeviceType(String name,
				String designation,
				String registryNumber,
				String connectorType,
				double startFreq,
				double stopFreq);

    //getters
	String getName(){return name;}
	String getDesignation(){return  designation;}
	String getRegistryNumber(){return registryNumber;}
	String getConnectorType(){return this->connectorType;}
};

//---------------------------------------------------------------------------
#endif
