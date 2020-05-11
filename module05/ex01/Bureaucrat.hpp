/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 15:21:57 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/11 21:32:14 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Bureaucrat
{
	public:
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat& bureaucrat);
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
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
		void signForm(Form& form);

	private:
		Bureaucrat();
		const std::string name;
		int grade;
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
