/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:07:18 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 21:53:36 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
	public:
		virtual ~Form();
		Form(const Form& form);
		Form(std::string name, int sign_grade, int exec_grade);
		Form &operator=(const Form& form);
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual Form *clone(std::string target) const = 0;

	private:
		Form();
		const std::string	name;
		bool			is_signed;
		const int		sign_grade;
		const int		exec_grade;
};

std::ostream &operator<<(std::ostream& os, const Form& form);

#endif
