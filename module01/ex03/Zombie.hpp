/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:06:54 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/12 13:50:29 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
	Zombie();
	void advert(void);
	Zombie(std::string name, std::string type);
	void setZombie(std::string name, std::string type);
	~Zombie();

	private:
	void announce(void);
	std::string name;
	std::string type;
};

#endif
