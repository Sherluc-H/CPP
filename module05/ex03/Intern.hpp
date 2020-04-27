/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:08:55 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 21:36:41 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& i);
		Intern &operator=(const Intern& i);
		Form* makeForm(std::string name, std::string target);

	private:
		Form	**all_forms;
		int		nb_of_forms;
};

#endif
