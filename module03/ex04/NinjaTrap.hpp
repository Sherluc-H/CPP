/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 22:59:43 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/05 01:47:20 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

class SuperTrap;

# include <string>
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
		void ninjaShoebox(const SuperTrap & st);
		void meleeAttack(std::string const & target);

};

#endif
