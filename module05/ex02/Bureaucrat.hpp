/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:24:55 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 17:25:33 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Bureaucrat: public std::exception
{
	public:
		~Bureaucrat() throw();
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat& bureaucrat);
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		Bureaucrat &GradeTooHighException() throw();
		Bureaucrat &GradeTooLowException() throw();
		const char *what() const throw();
		void signForm(Form& form);
		void executeForm(Form const & form);

	private:
		Bureaucrat();
		const std::string name;
		int grade;
		std::string error_msg;
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
