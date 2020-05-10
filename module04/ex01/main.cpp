/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:19:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/10 02:54:35 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

class WaterGun: public AWeapon
{
	public:
		WaterGun(): AWeapon("Water Gun", 2, 5)
		{
			std::cout << "WaterGun default constructor" << std::endl;
		}
		virtual ~WaterGun()
		{
			std::cout << "WaterGun destructor" << std::endl;
		}
		WaterGun(const WaterGun& wg): AWeapon(wg.name, wg.apcost, wg.damage)
		{
			std::cout << "WaterGun copy constructor" << std::endl;
		}
		WaterGun &operator=(const WaterGun& wg)
		{
			std::cout << "WaterGun op=" << std::endl;
			this->name = wg.name;
			this->apcost = wg.apcost;
			this->damage = wg.damage;
			return (*this);
		}
		void attack() const
		{
			std::cout << "* Splash *" << std::endl;
		}
};

class AtomicBomb: public AWeapon
{
	public:
		AtomicBomb(): AWeapon("Atomic Bomb", 20, 150)
		{
			std::cout << "AtomicBomb default constructor" << std::endl;
		}
		virtual ~AtomicBomb()
		{
			std::cout << "AtomicBomb destructor" << std::endl;
		}
		AtomicBomb(const AtomicBomb& ab): AWeapon(ab.name, ab.apcost, ab.damage)
		{
			std::cout << "AtomicBomb copy constructor" << std::endl;
		}
		AtomicBomb &operator=(const AtomicBomb& ab)
		{
			std::cout << "AtomicBomb op=" << std::endl;
			this->name = ab.name;
			this->apcost = ab.apcost;
			this->damage = ab.damage;
			return (*this);
		}
		void attack() const
		{
			std::cout << "* BOUUUM *" << std::endl;
		}
};

class VenumSnake: public Enemy
{
	public:
		VenumSnake(): Enemy(12, "VenumSnake")
		{
			std::cout << "* Zsiiiiii *" << std::endl;
		}
		virtual ~VenumSnake()
		{
			std::cout << "* Zsi *" << std::endl;
		}
		VenumSnake(const VenumSnake& vs): Enemy(vs.hp, vs.type)
		{
			std::cout << "* Zsiiiiii *" << std::endl;
			std::cout << "VenumSnake copy constructor" << std::endl;
		}
		VenumSnake &operator=(const VenumSnake& vs)
		{
			this->hp = vs.hp;
			this->type = vs.type;
			return (*this);
		}
};

class IceZombie: public Enemy
{
	public:
		IceZombie(): Enemy(35, "IceZombie")
		{
			std::cout << "* Grawwwhhh *" << std::endl;
		}
		virtual ~IceZombie()
		{
			std::cout << "* Awww *" << std::endl;
		}
		IceZombie(const IceZombie& iz): Enemy(iz.hp, iz.type)
		{
			std::cout << "* Grawwwhhh *" << std::endl;
			std::cout << "IceZombie copy constructor" << std::endl;
		}
		IceZombie &operator=(const IceZombie& iz)
		{
			this->hp = iz.hp;
			this->type = iz.type;
			return (*this);
		}
};

int	main(void)
{
	Character *me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();

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

	delete pr;
	delete pf;
	delete me;

	Character *character = new Character("character");

	SuperMutant *a = new SuperMutant();
	VenumSnake *vs = new VenumSnake();
	IceZombie *iz = new IceZombie();

	AtomicBomb *atom = new AtomicBomb();
	WaterGun *gun = new WaterGun();

	character->attack(a);
	std::cout << *character;
	std::cout << *character;

	AWeapon *aw;
	PowerFist pf2;
	aw = &pf2;
	character->equip(aw);
	character->attack(a);
	std::cout << *character;
	character->attack(vs);
	character->attack(iz);
	character->recoverAP();
	character->recoverAP();
	character->equip(gun);
	character->attack(a);
	std::cout << *character;
	character->attack(a);
	character->equip(atom);
	character->attack(a);
	std::cout << *character;
	character->attack(a);
	std::cout << *character;
	character->recoverAP();
	std::cout << *character;

	delete character;
	delete atom;
	delete gun;

	return (0);
}
