/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 19:53:55 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 19:53:57 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;	
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = i * 256;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * 256);
}

Fixed &Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt(void) const
{
	return (this->value/256);
}

float Fixed::toFloat(void) const
{
	return (((float)this->value)/256);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	return (os << fixed.toFloat());
}
