/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:10:11 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/12 16:22:04 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& scf);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& scf);
		void execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm();
		std::string target;
};

#endif
