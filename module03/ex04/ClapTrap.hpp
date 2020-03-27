#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& ct);
		ClapTrap(std::string name);
		ClapTrap &operator=(const ClapTrap& cp);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) const;
		unsigned int getMeleeAttDam(void) const;
		unsigned int getRangedAttDam(void) const;

	protected:
		unsigned int	hit_pts;
		unsigned int	max_hit_pts;
		unsigned int	nrg_pts;
		unsigned int	max_nrg_pts;
		unsigned int	level;
		std::string	name;
		unsigned int	melee_att_dam;
		unsigned int	ranged_att_dam;
		unsigned int	armor_dam_reduc;

};

#endif
