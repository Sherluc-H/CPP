#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
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
		~Character();
		Character(const Character& c);
		Character &operator=(const Character& c);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;

};

std::ostream &operator<<(std::ostream &os, Character &c);

#endif
