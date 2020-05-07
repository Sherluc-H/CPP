/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 22:57:56 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/07 01:33:43 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		~ClapTrap();
		ClapTrap(const ClapTrap& ct);
		ClapTrap &operator=(const ClapTrap& cp);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) const;
		unsigned int getMeleeAttDam(void) const;
		unsigned int getRangedAttDam(void) const;

	protected:
		ClapTrap();
		ClapTrap(std::string name);
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
