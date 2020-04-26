/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 22:42:04 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 22:42:05 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;
	this->nb_of_mat = 0;
}

MateriaSource::~MateriaSource()
{
	int i;
	std::cout << "MateriaSource destructor" << std::endl;
	if (this->nb_of_mat > 0)
	{
		i = 0;
		while (i < this->nb_of_mat)
		{
			delete this->materias[i];
			i++;
		}
		delete this->materias;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	int i;

	std::cout << "MateriaSource copy constructor" << std::endl;
	this->nb_of_mat = ms.nb_of_mat;
	if (this->nb_of_mat > 0)
	{
		this->materias = new AMateria*[this->nb_of_mat];
		i = 0;
		while (i < this->nb_of_mat)
		{
			this->materias[i] = ms.materias[i]->clone();
			i++;
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource& ms)
{
	int i;

	if (this->nb_of_mat > 0)
	{
		i = 0;
		while (i < this->nb_of_mat)
		{
			delete this->materias[i];
			i++;
		}
		delete this->materias;
	}
	this->nb_of_mat = ms.nb_of_mat;
	if (this->nb_of_mat > 0)
	{
		this->materias = new AMateria*[this->nb_of_mat];
		i = 0;
		while (i < this->nb_of_mat)
		{
			this->materias[i] = ms.materias[i]->clone();
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* am)
{
	AMateria **new_materias;
	int i;

	if (this->nb_of_mat >= 4)
		return ;
	this->nb_of_mat = this->nb_of_mat + 1;
	new_materias = new AMateria*[this->nb_of_mat];
	i = 0;
	while (i < this->nb_of_mat - 1)
	{
		new_materias[i] = this->materias[i];
		i++;
	}
	new_materias[i] = am->clone();
	delete this->materias;
	this->materias = new_materias;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	while (i < this->nb_of_mat)
	{
		if (this->materias[i]->getType().compare(type) == 0)
			return (this->materias[i]->clone());
		i++;
	}
	return (0);
}

