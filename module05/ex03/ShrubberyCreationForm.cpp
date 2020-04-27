/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:11:24 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 22:00:51 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shrubbery creation", 145, 137)
{
	std::cout << "Shru default constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shru destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf): Form(scf.getName(), 145, 137)
{
	std::cout << "Shru copy constructor" << std::endl;
	*this = scf;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("shrubbery creation", 145, 137), target(target)
{
	std::cout << "Shru param constructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	std::cout << "Shru op=" << std::endl;
	this->target = scf.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file;

	Form::execute(executor);
	file.open(this->target);
	if (file.is_open())
	{
		file <<
"      ooooo           ooooooo\n\
    ooooooo o        o ooooooo\n\
   oo oooooooo      oooooooo oo\n\
   ooooo ooooo      ooooo ooooo\n\
 oo ooooooooo        ooooooooo oo\n\
oooo  |   |            |   |  oooo\n\
oo\\\\__|   |            |   |__//oo\n\
   \\__|   |            |   |__/\n\
      |   |            |   |\n\
     /|   |\\          /|   |\\" << std::endl;
		file.close();
	}
}

ShrubberyCreationForm *ShrubberyCreationForm::clone(std::string target) const
{
	return (new ShrubberyCreationForm(target));
};
