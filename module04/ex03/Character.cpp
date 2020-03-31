#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	std::cout << "Character default constructor" << std::endl;
	this->nb_of_mat = 0;
}

Character::~Character()
{
	int i;

	std::cout << "Character destructor" << std::endl;
	if (this->nb_of_mat > 0)
	{
		i = 0;
		while (i < this->nb_of_mat)
		{
			delete this->mat_inv[i];
			i++;
		}
		delete this->mat_inv;
	}
}

Character::Character(const Character& c)
{
	int i;

	std::cout << "Character copy constructor" << std::endl;
	this->name = c.name;
	this->nb_of_mat = c.nb_of_mat;
	if (this->nb_of_mat > 0)
	{
		this->mat_inv = new AMateria*[this->nb_of_mat];
		i = 0;
		while (i < this->nb_of_mat)
		{
			this->mat_inv[i] = c.mat_inv[i]->clone();
			i++;
		}
	}
}

Character::Character(std::string name)
{
	std::cout << "Character param constructor" << std::endl;
	this->name = name;
	this->nb_of_mat = 0;
}

Character &Character::operator=(const Character& c)
{
	int i;

	if (this->nb_of_mat > 0)
	{
		i = 0;
		while (i < this->nb_of_mat)
		{
			delete this->mat_inv[i];
			i++;
		}
		delete this->mat_inv;
	}
	this->name = c.name;
	this->nb_of_mat = c.nb_of_mat;
	if (this->nb_of_mat > 0)
	{
		this->mat_inv = new AMateria*[this->nb_of_mat];
		i = 0;
		while (i < this->nb_of_mat)
		{
			this->mat_inv[i] = c.mat_inv[i]->clone();
			i++;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i;
	AMateria **new_inv;
	(void)m;
	if (this->nb_of_mat > 3)
		return ;
	this->nb_of_mat = this->nb_of_mat + 1;
	new_inv = new AMateria*[this->nb_of_mat];
	i = 0;
	while (i < this->nb_of_mat - 1)
	{
		new_inv[i] = this->mat_inv[i];
		i++;
	}
	new_inv[i] = m;
	delete this->mat_inv;
	this->mat_inv = new_inv;
}

void Character::unequip(int idx)
{
	AMateria **new_inv;
	int i;
	int j;

	if (this->nb_of_mat == 0 || idx < 0 || this->nb_of_mat <= idx)
		return ;
	this->nb_of_mat = this->nb_of_mat - 1;
	new_inv = new AMateria*[this->nb_of_mat];
	i = 0;
	j = 0;
	while (i < this->nb_of_mat + 1)
	{
		if (i != idx)
		{
			new_inv[j] = this->mat_inv[i];
			j++;
		}
		i++;
	}
	delete this->mat_inv;
	this->mat_inv = new_inv;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= this->nb_of_mat)
		return ;
	this->mat_inv[idx]->use(target);
}
