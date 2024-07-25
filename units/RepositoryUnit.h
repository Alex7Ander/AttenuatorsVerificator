//---------------------------------------------------------------------------
#ifndef RepositoryUnitH
#define RepositoryUnitH
#include "DeviceUnit.h"
//---------------------------------------------------------------------------
 class Repository{
  public:
	virtual void save()=0;

};

class DeviceTypeRepository : public Repository{
public:

};

#endif
