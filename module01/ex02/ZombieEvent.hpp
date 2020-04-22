/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:41:53 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/22 23:20:02 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		Zombie *randomChump(void);
	private:
		void announce(std::string name);
		std::string type;
		static std::string r_name[10];
};

#endif
