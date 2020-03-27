#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		~SuperTrap();
		SuperTrap(const SuperTrap& spt);
		SuperTrap(std::string name);
		SuperTrap &operator=(const SuperTrap& spt);
};

#endif
