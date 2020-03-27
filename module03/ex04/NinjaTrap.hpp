#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(const NinjaTrap& nt);
		NinjaTrap(std::string name);
		NinjaTrap &operator=(const NinjaTrap& nt);
		void ninjaShoebox(const ClapTrap & ct);
		void ninjaShoebox(const FragTrap & ft);
		void ninjaShoebox(const ScavTrap & st);
		void ninjaShoebox(const NinjaTrap & nt);
		void meleeAttack(std::string const & target);

};

#endif
