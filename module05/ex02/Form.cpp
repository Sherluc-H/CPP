/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:57:50 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/11 22:10:16 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

Form::Form(): name(""), sign_grade(0), exec_grade(0)
{
	std::cout << "Form Default constructor" << std::endl;
	this->is_signed = false;
}

Form::~Form()
{
	std::cout << "Form Destructor" << std::endl;
}

Form::Form(const Form& form): is_signed(form.is_signed), sign_grade(form.sign_grade), exec_grade(form.exec_grade)
{
	std::cout << "Form Copy constructor" << std::endl;
	*this = form;
}

Form::Form(std::string name, int sign_grade, int exec_grade): name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << "Form Param constructor" << std::endl;
	this->is_signed = false;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw (Form::GradeTooHighException());
	else if (this->sign_grade > 150 || this->exec_grade > 150)
		throw (Form::GradeTooLowException());
}

Form &Form::operator=(const Form& form)
{
	std::cout << "Form op=" << std::endl;
	this->is_signed = form.is_signed;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->is_signed);
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecGrade() const
{
	return (this->exec_grade);
}

Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "gradetoohigh default constructor" << std::endl;
}

Form::GradeTooHighException::~GradeTooHighException()
{
	std::cout << "gradetoohigh destructor" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException& g)
{
	std::cout << "gradetoohigh copy constructor" << std::endl;
	*this = g;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const Form::GradeTooHighException& g)
{
	(void)g;
	std::cout << "gradetoohigh op=" << std::endl;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "gradetoolow default constructor" << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException()
{
	std::cout << "gradetoolow destructor" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException& g)
{
	std::cout << "gradetoolow copy constructor" << std::endl;
	*this = g;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const Form::GradeTooLowException& g)
{
	(void)g;
	std::cout << "gradetoolow op=" << std::endl;
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

Form::NotSignedException::NotSignedException()
{
	std::cout << "notsigned default constructor" << std::endl;
}

Form::NotSignedException::~NotSignedException()
{
	std::cout << "notsigned destructor" << std::endl;
}

Form::NotSignedException::NotSignedException(const Form::NotSignedException& n)
{
	std::cout << "notsigned copy constructor" << std::endl;
	*this = n;
}

Form::NotSignedException &Form::NotSignedException::operator=(const Form::NotSignedException& n)
{
	(void)n;
	std::cout << "notsigned op=" << std::endl;
	return (*this);
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Not Signed");
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->sign_grade)
		throw (Form::GradeTooLowException());
	this->is_signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!(this->is_signed))
		throw(Form::NotSignedException());
	else if (executor.getGrade() > this->exec_grade)
		throw(Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream& os, const Form& form)
{
	std::string str_signed = "false";
	if (form.getIsSigned())
		str_signed = "true";
	os << "Form " << form.getName() << " signed : " << str_signed << ", needs grade " << form.getSignGrade() << " to sign and needs " << form.getExecGrade() << " to execute" << std::endl;
	return (os);
}
