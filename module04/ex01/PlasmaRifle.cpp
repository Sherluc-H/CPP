/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:20:48 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 15:20:50 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "PlasmaRifle Default constructor" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle Destructor" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& pr) : AWeapon(pr.name, pr.apcost, pr.damage)
{
	std::cout << "PlasmaRifle Copy constructor" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle& pr)
{
	this->name = pr.name;
	this->apcost = pr.apcost;
	this->damage = pr.damage;
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
