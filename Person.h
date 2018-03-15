#pragma once
#include "SmartCharacterArray.h"
class Person
{
public:
	Person() {};
	~Person() {};
	bool setLastName(const  char * lastName);
	char * getLastName();

	void print();

private:
	SmartCharacterArray lastName_;
};

