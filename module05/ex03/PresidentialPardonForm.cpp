/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:10:28 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/12 19:19:32 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", 25, 5)
{
	std::cout << "Presi default constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presi destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf): Form(ppf.getName(), 25, 5)
{
	std::cout << "Presi copy constructor" << std::endl;
	*this = ppf;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("presidential pardon", 25, 5), target(target)
{
	std::cout << "Presi param constructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf)
{
	std::cout << "Presi op=" << std::endl;
	this->target = ppf.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!(this->getIsSigned()))
		throw(Form::NotSignedException());
	else if (this->getExecGrade() < executor.getGrade())
		throw(Form::GradeTooLowException());
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm *PresidentialPardonForm::clone(std::string target) const
{
	return (new PresidentialPardonForm(target));
}
