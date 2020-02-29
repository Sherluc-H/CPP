/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:51:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/12 13:50:39 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main()
{
	ZombieHorde zh = ZombieHorde(5);
	Zombie *z = zh.get_horde();
	z[0].advert();
	z[1].advert();
	z[2].advert();
	z[3].advert();
	z[4].advert();
	//delete z;
}
