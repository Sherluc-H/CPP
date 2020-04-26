/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:18:44 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 17:43:04 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character();
		std::string 	name;
		int		ap;
		AWeapon		*weapon;

	public:
		Character(std::string const & name);
		Character(const Character& c);
		Character &operator=(const Character& c);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const & getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;

};

std::ostream &operator<<(std::ostream &os, Character &c);

#endif
