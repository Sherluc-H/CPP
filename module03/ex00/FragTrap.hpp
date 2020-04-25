/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:00:32 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 21:00:52 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

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
