/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:41:53 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/11 17:47:49 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		Zombie *randomChump(void);
		void announce(std::string name);
	private:
		std::string type;
		static std::string r_name[10];
};

#endif
