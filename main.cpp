#include "SmartCharacterArray.h"
#include "Person.h"

int main()
{
	SmartCharacterArray sca;
	sca.set("test");

	Person person;
	person.setLastName("Meier"); // this works
	person.print();

	Person person2(person); //this doesnt work



	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); //checks for memoryleaks
	return 0;
}
