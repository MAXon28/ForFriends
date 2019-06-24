#pragma once
#include "Address.h"
class AddressPostal : public Address
{
private:
	long int addressPostal;
public:
	AddressPostal();
	void Set_addressPostal();
	long int Get_adressPostal();
	void toString() override;
};