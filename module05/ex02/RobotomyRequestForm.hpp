/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:11:10 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 18:11:12 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
	public:
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& rrf);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& rrf);
		void execute(Bureaucrat const & executor) const;

	private:
		RobotomyRequestForm();
		std::string target;
};

#endif
