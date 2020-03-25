#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;	
}

Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = i * 256;
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * 256);
}

Fixed &Fixed::operator=(const Fixed& fixed)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
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

bool Fixed::operator>(const Fixed& fixed)
{
	return (this->value > fixed.value);
}

bool Fixed::operator<(const Fixed& fixed)
{
	return (this->value < fixed.value);
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return (this->value >= fixed.value);
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return (this->value <= fixed.value);
}

bool Fixed::operator==(const Fixed& fixed)
{
	return (this->value == fixed.value);
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return (this->value != fixed.value);
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed new_fixed;

	new_fixed.value = this->value + fixed.value;
	return (new_fixed);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed new_fixed;

	new_fixed.value = this->value - fixed.value;
	return (new_fixed);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed new_fixed;

	new_fixed.value = this->value * fixed.value / 256;
	return (new_fixed);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed new_fixed;

	new_fixed.value = roundf(((float)this->value / fixed.value) * 256);
	return (new_fixed);
}

Fixed &Fixed::operator++(void)
{
	this->value = this->value + 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->value = this->value - 1;
	return (*this);
}

Fixed Fixed::operator++(int i)
{
	Fixed new_fixed;

	(void)i;
	new_fixed = *this;
	this->value = this->value + 1;
	return (new_fixed);
}

Fixed Fixed::operator--(int i)
{
	Fixed new_fixed;

	(void)i;
	new_fixed = *this;
	this->value = this->value - 1;
	return (new_fixed);
}

Fixed &Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed2.value < fixed1.value)
		return (fixed2);
	return (fixed1);
}

Fixed &Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed2.value > fixed1.value)
		return (fixed2);
	return (fixed1);
}

const Fixed &Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed2.value < fixed1.value)
		return (fixed2);
	return (fixed1);
}

const Fixed &Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed2.value > fixed1.value)
		return (fixed2);
	return (fixed1);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	return (os << fixed.toFloat());
}
