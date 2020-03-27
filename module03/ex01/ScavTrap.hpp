#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& st);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap& st);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);
		std::string getName(void) const;
		unsigned int getMeleeAttDam(void) const;
		unsigned int getRangedAttDam(void) const;

	private:
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
