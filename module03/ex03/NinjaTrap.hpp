/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:50:24 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 21:50:39 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
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

};

#endif
