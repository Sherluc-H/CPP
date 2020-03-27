#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& ft);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap& ft);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
		std::string getName(void) const;
		unsigned int getMeleeAttDam(void) const;
		unsigned int getRangedAttDam(void) const;

	private:
		unsigned int	hit_pts;
		unsigned int	max_hit_pts;
		unsigned int	nrg_pts;
		unsigned int	max_nrg_pts;
		unsigned int	level;
		std::string name;
		unsigned int	melee_att_dam;
		unsigned int	ranged_att_dam;
		unsigned int	armor_dam_reduc;

};

#endif
