/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:11:59 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/12 16:21:32 by lhuang           ###   ########.fr       */
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
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& ppf);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& ppf);
		void execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm();
		std::string target;
};

#endif
