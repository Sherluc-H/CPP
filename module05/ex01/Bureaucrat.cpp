/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 15:20:21 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/12 18:11:45 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Bureaucrat Constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): name(bureaucrat.name)
{
	std::cout << "Bureaucrat Copy constructor" << std::endl;
	*this = bureaucrat;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat Param Constructor" << std::endl;
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat op=" << std::endl;
	this->grade = bureaucrat.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incGrade()
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade = this->grade - 1;
}

void Bureaucrat::decGrade()
{
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = this->grade + 1;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "gradetoohigh default constructor" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{
	std::cout << "gradetoohigh destructor" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException& g)
{
	std::cout << "gradetoohigh copy constructor" << std::endl;
	*this = g;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException& g)
{
	(void)g;
	std::cout << "gradetoohigh op=" << std::endl;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "gradetoolow default constructor" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{
	std::cout << "gradetoolow destructor" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException& g)
{
	std::cout << "gradetoolow copy constructor" << std::endl;
	*this = g;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException& g)
{
	(void)g;
	std::cout << "gradetoolow op=" << std::endl;
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}
