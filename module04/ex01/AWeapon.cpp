/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:17:28 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 16:08:01 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	std::cout << "Default AWeapon constructor" << std::endl;
}

AWeapon::AWeapon(const AWeapon& awp)
{
	std::cout << "AWeapon Copy constructor" << std::endl;
	*this = awp;
}

AWeapon &AWeapon::operator=(const AWeapon& awp)
{
	std::cout << "equal op AWeapon" << std::endl;
	this->name = awp.name;
	this->apcost = awp.apcost;
	this->damage = awp.damage;
	return (*this);
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	std::cout << "AWeapon Param constructor" << std::endl;
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{
	std::cout << "AWeapon Destructor" << std::endl;
}

std::string const & AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}
