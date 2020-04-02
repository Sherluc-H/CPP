#include <iostream>
#include <string>
#include "Form.hpp"

Form::Form(): name(""), sign_grade(0), exec_grade(0)
{
	std::cout << "Form Default constructor" << std::endl;
	this->is_signed = false;
}

Form::~Form() throw()
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
	std::cout << "Form Default constructor" << std::endl;
	this->is_signed = false;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw (GradeTooHighException());
	else if (this->sign_grade > 150 || this->exec_grade > 150)
		throw (GradeTooLowException());
}

Form &Form::operator=(const Form& form)
{
	std::cout << "Form op=" << std::endl;
	this->is_signed = form.is_signed;
	this->error_msg = form.error_msg;
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

Form &Form::GradeTooHighException() throw()
{
	this->error_msg = "GradeTooHighException";
	return (*this);
}

Form &Form::GradeTooLowException() throw()
{
	this->error_msg = "GradeTooLowException";
	return (*this);
}

const char *Form::what() const throw()
{
	return (this->error_msg.c_str());
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->sign_grade)
		throw (GradeTooLowException());
	this->is_signed = true;
}

std::ostream &operator<<(std::ostream& os, const Form& form)
{
	std::string str_signed = "false";
	if (form.getIsSigned())
		str_signed = "true";
	os << "Form " << form.getName() << " signed : " << str_signed << " , needs grade " << form.getSignGrade() << " to sign and needs " << form.getExecGrade() << " to execute" << std::endl;
	return (os);
}
