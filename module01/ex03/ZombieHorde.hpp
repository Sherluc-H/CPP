/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:03:55 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/12 13:43:04 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <stdlib.h>
# include <time.h>

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		Zombie* get_horde(void);
		~ZombieHorde();
	private:
		Zombie *n_zombie;
		static std::string r_name[10];
};

#endif
