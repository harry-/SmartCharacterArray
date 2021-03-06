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

SmartCharacterArray::SmartCharacterArray(SmartCharacterArray & in)
{
	if (!set(in.startPointer_))
		startPointer_ = nullptr;
}

SmartCharacterArray::SmartCharacterArray(SmartCharacterArray && in)
{
	startPointer_ = in.startPointer_;
	in.startPointer_ = nullptr;
}

SmartCharacterArray & SmartCharacterArray::operator=(SmartCharacterArray & in)
{
	if (this == &in)
		return *this;
	delete startPointer_;
	startPointer_ = nullptr;
	if (in.startPointer_)
		set(in.startPointer_);
	else
		std::cerr << "SmartCharacterArray copy constructor has been passed an object with a char pointer pointing to null - this is not supposed to happen";
	return *this;
}

SmartCharacterArray & SmartCharacterArray::operator=(SmartCharacterArray && in)
{
	if (this == &in)
		return *this;
	delete startPointer_;
	startPointer_ = nullptr;
	startPointer_ = in.startPointer_;
	in.startPointer_ = nullptr;
	return *this;
}

SmartCharacterArray::~SmartCharacterArray()
{
	delete[] startPointer_;
	startPointer_ = nullptr;
}
