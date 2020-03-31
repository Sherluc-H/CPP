#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		unsigned int _xp;

	protected:
		AMateria();
		AMateria(const AMateria& am);
		std::string type;

	public:
		AMateria(std::string const & type);
		AMateria &operator=(const AMateria& am);
		virtual ~AMateria();

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
