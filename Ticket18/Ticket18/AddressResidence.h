#pragma once
#include "Address.h"
class AddressResidence : public Address
{
private:
	string Country;
	string City;
	string Street;
	int NumberOfHouse;
public:
	AddressResidence();
	void SetCountry();
	void SetCity();
	void SetStreet();
	void SetNumberOfHouse();
	string GetCountry();
	string GetCity();
	string GetStreet();
	int GetNumberOfHouse();
	void toString() override;
};