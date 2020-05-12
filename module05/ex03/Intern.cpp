/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:08:22 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/12 16:18:35 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor" << std::endl;
	this->all_forms = new Form*[3];
	this->all_forms[0] = new ShrubberyCreationForm("sample");
	this->all_forms[1] = new RobotomyRequestForm("sample");
	this->all_forms[2] = new PresidentialPardonForm("sample");
	this->nb_of_forms = 3;
}

Intern::~Intern()
{
	int i;

	std::cout << "Intern destructor" << std::endl;
	i = 0;
	while (i < this->nb_of_forms)
	{
		delete this->all_forms[i];
		i++;
	}
	delete [] this->all_forms;
}

Intern::Intern(const Intern& i)
{
	std::cout << "Intern copy constructor" << std::endl;
	*this = i;
}

Intern &Intern::operator=(const Intern& i)
{
	(void)i;
	std::cout << "Intern op=" << std::endl;
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	int i;

	i = 0;
	while (i < this->nb_of_forms)
	{
		if (this->all_forms[i]->getName().compare(name) == 0)
		{
			std::cout << "Intern creates " << this->all_forms[i]->getName() << std::endl;
			return (this->all_forms[i]->clone(target));
		}
		i++;
	}
	std::cout << "Intern couldn't create form, " << name << " is unknown" << std::endl;
	return (NULL);
}
