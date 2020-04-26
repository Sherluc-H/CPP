/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 22:37:47 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 22:38:02 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor" << std::endl;
	this->_xp = 0;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

AMateria::AMateria(const AMateria& am)
{
	std::cout << "AMateria copy constructor" << std::endl;
	*this = am;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria param constructor" << std::endl;
	this->_xp = 0;
	this->type = type;
}

AMateria &AMateria::operator=(const AMateria& am)
{
	std::cout << "AMateria op=" << std::endl;
	this->_xp = am._xp;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp = this->_xp + 10;
	std::cout << "xp" << this->_xp << std::endl;
}
