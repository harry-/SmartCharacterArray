#include "SmartCharacterArray.h"

SmartCharacterArray::SmartCharacterArray(const char * startPointer)
{
	set(startPointer);
}

char * SmartCharacterArray::get()
{
	return startPointer_;
}

bool SmartCharacterArray::set(const char * startPointer)
{
	if (!startPointer)
	{
		std::cerr << "call with null pointer";
		return false;
	}
	if (startPointer_)
	{
		delete[] startPointer_;
		startPointer_ = nullptr;
	}

	startPointer_ = new char[strlen(startPointer)+1];
	if (!startPointer_)
	{
		std::cerr << "memory allocation failed :(";
		return false;
	}

	copy2(startPointer, startPointer_);

}

SmartCharacterArray::~SmartCharacterArray()
{
	delete[] startPointer_;
}
