/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 15:22:45 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 17:30:24 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form: public std::exception
{
	public:
		~Form() throw();
		Form(const Form& form);
		Form(std::string name, int sign_grade, int exec_grade);
		Form &operator=(const Form& form);
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		Form &GradeTooHighException() throw();
		Form &GradeTooLowException() throw();
		const char *what() const throw();
		void beSigned(const Bureaucrat& bureaucrat);
		
	private:
		Form();
		const std::string	name;
		bool			is_signed;
		const int		sign_grade;
		const int		exec_grade;
		std::string		error_msg;
};

std::ostream &operator<<(std::ostream& os, const Form& form);

#endif
