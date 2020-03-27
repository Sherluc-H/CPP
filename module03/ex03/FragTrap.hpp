#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& ft);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap& ft);
		void vaulthunter_dot_exe(std::string const & target);

};

#endif
