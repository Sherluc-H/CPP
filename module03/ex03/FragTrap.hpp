/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:46:57 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 21:47:08 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& ft);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap& ft);
		void vaulthunter_dot_exe(std::string const & target);

};

#endif
