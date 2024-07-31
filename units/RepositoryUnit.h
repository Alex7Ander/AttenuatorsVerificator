//---------------------------------------------------------------------------
#ifndef RepositoryUnitH
#define RepositoryUnitH
#include <vector>
#include "DeviceUnit.h"
#include "DBConnectorUnit.h"
//---------------------------------------------------------------------------
 class Repository{
	protected:
		DBConnector *connector;

	public:
		Repository(DBConnector *connector){this->connector = connector;}
		DBConnector* getConnector(){return this->connector;}
};

class DeviceTypeRepository : public Repository{
public:
	DeviceTypeRepository(DBConnector *connector):Repository(connector){}

	void save(DeviceType *deviceType);

	std::vector<DeviceType*> getAllTypes();
};
#endif
