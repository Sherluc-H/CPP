#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	//Sorcerer s;
	//Victim v;
	//Peon p;
	//Sorcerer s1();
	//Victim v1();
	//Peon p1();
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");


	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	//jim.getPolymorphed();
	//joe.getPolymorphed();

	//Victim* vic;
	//Peon pe("pe");
	//vic = &pe;
	//vic->getPolymorphed();
	//robert.polymorph(*vic);
	return (0);
}