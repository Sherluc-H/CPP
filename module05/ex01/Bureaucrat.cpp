#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Bureaucrat Constructor" << std::endl;
}

Bureaucrat::~Bureaucrat() throw()
{
	std::cout << "Bureaucrat Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat Copy constructor" << std::endl;
	*this = bureaucrat;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat Param Constructor" << std::endl;
	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat op=" << std::endl;
	this->grade = bureaucrat.grade;
	this->error_msg = bureaucrat.error_msg;
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
		Bureaucrat::GradeTooHighException();
	else
		this->grade = this->grade - 1;
}

void Bureaucrat::decGrade()
{
	if (this->grade + 1 > 150)
		Bureaucrat::GradeTooLowException();
	else
		this->grade = this->grade + 1;
}

Bureaucrat &Bureaucrat::GradeTooHighException() throw()
{
	this->error_msg = "GradeTooHighException";
	return (*this);
}

Bureaucrat &Bureaucrat::GradeTooLowException() throw()
{
	this->error_msg = "GradeTooLowException";
	return (*this);
}

const char * Bureaucrat::what() const throw()
{
	return (this->error_msg.c_str());
}

void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
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
