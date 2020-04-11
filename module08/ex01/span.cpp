#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include "span.hpp"

Span::Span()
{
	std::cout << "Span default constructor" << std::endl;
	this->vec = std::vector<int>();
	this->index = 0;
}

Span::~Span()
{
	std::cout << "Span destructor" << std::endl;
}

Span::Span(const Span& span)
{
	std::cout << "Span copy constructor" << std::endl;
	this->vec = span.vec;
	this->index = span.index;
}

Span::Span(unsigned int n)
{
	std::cout << "Span param constructor" << std::endl;
	this->vec = std::vector<int>(n);
	std::cout << this->vec.size() << std::endl;
	this->index = 0;
}

Span &Span::operator=(const Span& span)
{
	std::cout << "Span op=" << std::endl;
	this->vec = span.vec;
	this->index = span.index;
	return (*this);
}

void Span::addNumber(int nb)
{
	std::cout << nb << "|" << this->vec.size() << "|" << this->index << std::endl;
	if (this->index < (int)this->vec.size())
	{
		this->vec.at(this->index) = nb;
		this->index = this->index + 1;
		std::sort(this->vec.begin(), this->vec.begin() + this->index);
		return ;
	}
	throw std::out_of_range("container full");
}

int Span::shortestSpan()
{
	if (this->index < 2)
		throw std::logic_error("not enough numbers in container");
	return (this->vec.at(1) - this->vec.front());
}

int Span::longestSpan()
{
	if (this->index < 2)
		throw std::logic_error("not enough numbers in container");
	return (this->vec.at(this->index - 1) - this->vec.front());
}
