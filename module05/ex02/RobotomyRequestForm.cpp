/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:10:44 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/12 16:31:47 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 45)
{
	std::cout << "Roboto default constructor" << std::endl;
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Roboto destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf): Form(rrf.getName(), 72, 45)
{
	std::cout << "Roboto copy constructor" << std::endl;
	*this = rrf;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("robotomy request", 72, 45), target(target)
{
	std::cout << "Roboto param constructor" << std::endl;
	srand(time(NULL));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf)
{
	std::cout << "Roboto op=" << std::endl;
	this->target = rrf.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int rand_num;

	if (!(this->getIsSigned()))
		throw(Form::NotSignedException());
	else if (this->getExecGrade() < executor.getGrade())
		throw(Form::GradeTooHighException());
	std::cout << "* Driiil driiil driiiiiil... *" << std::endl;
	rand_num = 0;
	rand_num = rand() % 2;
	if (rand_num == 1)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy failed on " << this->target << std::endl;
}

