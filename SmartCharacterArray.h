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

	SmartCharacterArray(SmartCharacterArray&) = delete;
	SmartCharacterArray(SmartCharacterArray&&) = delete;

	SmartCharacterArray & operator=(SmartCharacterArray&) = delete;
	SmartCharacterArray && operator=(SmartCharacterArray&&) = delete;


	~SmartCharacterArray();
private:
	char * startPointer_{ nullptr };

};

