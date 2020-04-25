/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 22:58:36 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 22:58:49 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& ft);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap& ft);
		void vaulthunter_dot_exe(std::string const & target);
		void rangedAttack(std::string const & target);

};

#endif
