/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:28:14 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 00:35:06 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);

	private:
		std::string name;
		Weapon *weapon;
};

#endif
