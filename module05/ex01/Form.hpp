/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 15:22:45 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/11 21:27:46 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	public:
		~Form();
		Form(const Form& form);
		Form(std::string name, int sign_grade, int exec_grade);
		Form &operator=(const Form& form);
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException();
				~GradeTooHighException();
				GradeTooHighException(const GradeTooHighException& g);
				GradeTooHighException &operator=(const GradeTooHighException& g);
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException();
				~GradeTooLowException();
				GradeTooLowException(const GradeTooLowException& g);
				GradeTooLowException &operator=(const GradeTooLowException& g);
				const char *what() const throw();
		};
		void beSigned(const Bureaucrat& bureaucrat);

	private:
		Form();
		const std::string	name;
		bool			is_signed;
		const int		sign_grade;
		const int		exec_grade;
};

std::ostream &operator<<(std::ostream& os, const Form& form);

#endif
