/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:03:40 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/10 02:36:54 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class Dummie: public Victim
{
	public:
		virtual ~Dummie()
		{
			std::cout << "Bouuum..." << std::endl;
		}
		Dummie(const Dummie& d): Victim(d.name)
		{
			std::cout << "Dummie ready !" << std::endl;
		}
		Dummie(std::string name): Victim(name)
		{
			std::cout << "Dummie ready !" << std::endl;
		}
		Dummie &operator=(const Dummie& d)
		{
			this->name = d.name;
			return (*this);
		}
		void getPolymorphed() const
		{
			std::cout << this->name << " has been turned into a green cow!" << std::endl;
		}
	
	private:
		Dummie()
		{
			std::cout << "Dummie default constructor" << std::endl;
		}
};

class Hostage: public Victim
{
	public:
		virtual ~Hostage()
		{
			std::cout << "Hostage died..." << std::endl;
		}
		Hostage(const Hostage& h): Victim(h.name)
		{
			std::cout << "Oh nooo !" << std::endl;
		}
		Hostage(std::string name): Victim(name)
		{
			std::cout << "Oh nooo !" << std::endl;
		}
		Hostage &operator=(const Hostage& h)
		{
			this->name = h.name;
			return (*this);
		}
		void getPolymorphed() const
		{
			std::cout << this->name << " has been turned into a red chicken!" << std::endl;
		}
	
	private:
		Hostage()
		{
			std::cout << "Hostage default constructor" << std::endl;
		}
};

int main(void)
{
	//Sorcerer s;
	//Victim v;
	//Peon p;
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");


	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	jim.getPolymorphed();
	joe.getPolymorphed();

	Victim* vic;
	Peon pe("pe");
	vic = &pe;
	vic->getPolymorphed();
	robert.polymorph(*vic);

	Dummie dume("Dume");
	Hostage hosta("Hosta");

	robert.polymorph(dume);
	robert.polymorph(hosta);
	dume.getPolymorphed();
	hosta.getPolymorphed();

	std::cout << robert << dume << hosta;

	return (0);
}
