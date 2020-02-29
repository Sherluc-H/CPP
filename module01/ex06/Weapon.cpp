/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:13:11 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/13 19:14:33 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = new std::string();
}

Weapon::~Weapon()
{
	std::cout << *this->type << " dropped" << std::endl;
	//delete this->type;
}

Weapon::Weapon(std::string type)
{
	this->type = new std::string(type);
}

void Weapon::setType(std::string type)
{
	*this->type = type;
}

const std::string& Weapon::getType(void)
{
	return (*this->type);
}
