/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:04:37 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/07 20:24:07 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Victim Default constructor" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& v)
{
	std::cout << "Some random victim called "<< v.name << " just appeared!" << std::endl;
	*this = v;
}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called "<< name << " just appeared!" << std::endl;
	this->name = name;
}

Victim &Victim::operator=(const Victim& v)
{
	this->name = v.name;
	return (*this);
}

std::string Victim::getName()
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream& os, Victim& v)
{
	os << "I\'m " << v.getName() << " and I like otters!" << std::endl;
	return (os);
}
