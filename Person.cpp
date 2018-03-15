#include "Person.h"

bool Person::setLastName(const  char * lastName)
{
	lastName_.set(lastName);
	return true;
}

char * Person::getLastName()
{
	return lastName_.get();
}

void Person::print()
{
	std::cout << getLastName();
}
