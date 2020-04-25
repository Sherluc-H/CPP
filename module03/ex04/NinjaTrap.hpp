/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 22:59:43 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 23:25:16 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

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
		void meleeAttack(std::string const & target);

};

#endif
