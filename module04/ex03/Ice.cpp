/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 22:41:01 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 23:50:57 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(const Ice& ice): AMateria("ice")
{
	(void)ice;
	std::cout << "Ice copy constructor" << std::endl;
}

Ice &Ice::operator=(const Ice& ice)
{
	(void)ice;
	std::cout << "Ice op=" << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
