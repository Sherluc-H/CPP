#include <iostream>
#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad()
{
	std::cout << "Squad default constructor" << std::endl;
	this->unit = new ISpaceMarine*[0];
	this->nb_of_squads = 0;
}

Squad::~Squad()
{
	int i;

	std::cout << "Squad destructor" << this << std::endl;
	if (this->nb_of_squads > 0)
	{
		i = 0;
		while (i < this->nb_of_squads)
		{
			delete this->unit[i];
			i++;
		}
	}
}

Squad::Squad(const Squad &sq)
{
	int i;
	std::cout << "Squad copy constructor" << this << std::endl;
	if (sq.nb_of_squads > 0)
	{
		this->unit = new ISpaceMarine*[sq.nb_of_squads];
		i = 0;
		while (i < sq.nb_of_squads)
		{
			this->unit[i] = sq.unit[i]->clone();
			i++;
		}
	}
	else
		this->unit = sq.unit;
	this->nb_of_squads = sq.nb_of_squads;
}

Squad &Squad::operator=(const Squad & sq)
{
	int i;
	std::cout << "Squad op=" << this << std::endl;
	if (this->nb_of_squads > 0)
	{
		i = 0;
		while (i < this->nb_of_squads)
		{
			delete this->unit[i];
			i++;
		}
		delete this->unit;
	}
	if (sq.nb_of_squads > 0)
	{
		this->unit = new ISpaceMarine*[sq.nb_of_squads];
		i = 0;
		while (i < sq.nb_of_squads)
		{
			this->unit[i] = sq.unit[i]->clone();
			i++;
		}
	}
	else
		this->unit = sq.unit;
	this->nb_of_squads = sq.nb_of_squads;
	return (*this);
}

int Squad::getCount() const
{
	return (this->nb_of_squads);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i < 0 || i >=  this->nb_of_squads)
		return (NULL);
	return (this->unit[i]);
}

int Squad::push(ISpaceMarine* ism)
{
	int i;
	ISpaceMarine **new_unit;

	if (!ism)
	{
		std::cout << "Can't push a null pointer" << std::endl;
		return (this->nb_of_squads);
	}
	i = 0;
	while (i < this->nb_of_squads)
	{
		if (unit[i] == ism)
		{
			std::cout << "Already in" << std::endl;
			return (this->nb_of_squads);
		}
		i++;
	}
	this->nb_of_squads = this->nb_of_squads + 1;
	new_unit = new ISpaceMarine*[this->nb_of_squads];
	i = 0;
	while (i < this->nb_of_squads - 1)
	{
		new_unit[i] = unit[i];
		i++;
	}
	if (this->nb_of_squads > 0)
		new_unit[this->nb_of_squads - 1] = ism;
	delete this->unit;
	this->unit = new_unit;
	return (this->nb_of_squads);
}
