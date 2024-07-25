//---------------------------------------------------------------------------
#ifndef DeviceUnitH
#define DeviceUnitH

class DeviceType{
private:
	String name;
	String designation;
	String registryNumber;
public:
	DeviceType(String name, String designation, String registryNumber);
	String getName(){return name;}
	String getDesignation(){return  designation;}
	String getRegistryNumber(){return registryNumber;}
};

//---------------------------------------------------------------------------
#endif
