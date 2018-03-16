#pragma once
#include <iostream>
#include "copy.h"


class SmartCharacterArray
{
public:
	SmartCharacterArray() {};
	SmartCharacterArray(const char* startPointer);
	char * get();
	bool set(const char * startPointer);

	SmartCharacterArray(SmartCharacterArray&);
	SmartCharacterArray(SmartCharacterArray&&);

	SmartCharacterArray & operator=(SmartCharacterArray&);
	SmartCharacterArray & operator=(SmartCharacterArray&&);


	~SmartCharacterArray();
private:
	char * startPointer_{ nullptr };

};

