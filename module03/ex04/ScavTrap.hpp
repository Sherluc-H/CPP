#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& st);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap& st);
		void challengeNewcomer(std::string const & target);

};

#endif
