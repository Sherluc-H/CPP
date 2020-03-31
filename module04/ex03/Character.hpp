#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		~Character();
		Character(const Character& c);
		Character(std::string name);
		Character &operator=(const Character& c);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		Character();
		std::string name;
		AMateria **mat_inv;
		int	nb_of_mat;
};

#endif
