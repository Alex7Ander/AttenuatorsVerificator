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
    String comment;

public:
	DeviceType(String name,
				String designation,
				String registryNumber,
				String connectorType,
				double startFreq,
				double stopFreq,
				String comment);

    //getters
	String getName(){return name;}
	String getDesignation(){return  designation;}
	String getRegistryNumber(){return registryNumber;}
	String getConnectorType(){return this->connectorType;}
	double getStartFreq(){return this->startFreq;}
	double getStopFreq(){return this->stopFreq;}
    String getComment(){return this->comment;}
};

//---------------------------------------------------------------------------
#endif
