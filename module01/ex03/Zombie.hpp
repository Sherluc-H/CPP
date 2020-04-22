/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:06:54 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/22 23:47:20 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		Zombie();
		void announce(void);
		Zombie(std::string name, std::string type);
		void setZombie(std::string name, std::string type);
		~Zombie();

	private:
		std::string name;
		std::string type;
};

#endif
