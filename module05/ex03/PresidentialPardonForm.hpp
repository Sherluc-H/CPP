/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:10:41 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 21:29:50 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
	public:
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& ppf);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& ppf);
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm *clone(std::string target) const;

	private:
		PresidentialPardonForm();
		std::string target;
};

#endif
