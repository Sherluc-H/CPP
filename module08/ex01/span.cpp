/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 23:39:40 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/23 14:27:29 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "span.hpp"

Span::Span()
{
	std::cout << "Span default constructor" << std::endl;
	this->vec = std::vector<int>();
	this->index = 0;
	srand(time(NULL));
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
	this->index = 0;
	srand(time(NULL));
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
	if (this->index < this->vec.size())
	{
		this->vec.at(this->index) = nb;
		this->index = this->index + 1;
		return ;
	}
	throw (Span::SpanException("Span container full"));
}

void Span::addNRandNumber(unsigned int n, int min, int max)
{
	unsigned int i;

	if (min > max)
		throw (Span::SpanException("max random < min random"));
	i = 0;
	while (i < n)
	{
		if (this->index >= this->vec.size())
			throw (Span::SpanException("Span container full"));
		this->vec.at(this->index) = (rand() % (max + 1 - min)) + min;
		this->index = this->index + 1;
		i++;
	}
}

int Span::shortestSpan()
{
	int currdiff;
	int newdiff;

	if (this->index < 2)
		throw (Span::SpanException("not enough numbers in Span container"));
	std::sort(this->vec.begin(), this->vec.end());
	std::vector<int>::iterator it = this->vec.begin();
	std::vector<int>::iterator it2 = this->vec.begin();
	std::vector<int>::iterator ite = this->vec.end();
	currdiff = this->longestSpan();
	newdiff = 0;
	--ite;
	while (it != ite)
	{
		newdiff = *(++it2) - *it;
		if (newdiff < currdiff)
			currdiff = newdiff;
		it++;
	}
	return (currdiff);
}

int Span::longestSpan()
{
	if (this->index < 2)
		throw (Span::SpanException("not enough numbers in Span container"));
	return (*(std::max_element(this->vec.begin(), this->vec.end())) - *(std::min_element(this->vec.begin(), this->vec.end())));
}

Span::SpanException::SpanException()
{
	std::cout << "SpanException default constructor" << std::endl;
	this->msg = "Span error occured";
}

Span::SpanException::~SpanException() throw()
{
	std::cout << "SpanException destructor" << std::endl;
}

Span::SpanException::SpanException(std::string msg)
{
	std::cout << "SpanException param constructor" << std::endl;
	this->msg = msg;
}

Span::SpanException::SpanException(const Span::SpanException& se)
{
	std::cout << "SpanException copy constructor" << std::endl;
	*this = se;
}

Span::SpanException &Span::SpanException::operator=(const Span::SpanException& se)
{
	std::cout << "SpanException op=" << std::endl;
	this->msg = se.msg;
	return (*this);
}

const char *Span::SpanException::what() const throw()
{
	return (this->msg.c_str());
}
