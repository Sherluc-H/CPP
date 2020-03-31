#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main(void)
{
	//AWeapon AW;
	/*AWeapon *a;
	PlasmaRifle pr;
	PlasmaRifle p2;
	PlasmaRifle p3(p2);
	PowerFist pf;*/
	//AWeapon b(pr);
	//AWeapon a4("test", 1, 2);
	Character *me = new Character("me");
	Character *character = new Character("character");

	std::cout << *me;


	//SuperMutant *a = new SuperMutant();
	RadScorpion *b = new RadScorpion();
	//RadScorpion b;
	me->attack(b);
	std::cout << *me;
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	//me->attack(b);
	//std::cout << *me;
	//p2 = pr;
	//a = &pr;

	delete pr;
	delete pf;
	delete character;
	//delete spm;
	//delete rds;
	//delete spm2;
	return (0);
}
