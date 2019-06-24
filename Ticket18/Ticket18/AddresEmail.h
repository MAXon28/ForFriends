#pragma once
#include "Address.h"
class AddressEmail : public Address
{
private:
	string Email;
public:
	AddressEmail();
	void SetEmail();
	string GetEmail();
	void toString() override;
};