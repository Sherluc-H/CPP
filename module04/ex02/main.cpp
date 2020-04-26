/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 20:03:06 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 21:07:15 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	AssaultTerminator* jim = new AssaultTerminator;
	Squad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	vlc->push(NULL);
	Squad vlc2;
	vlc2 = Squad(*vlc);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		ISpaceMarine* cur2 = vlc2.getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	ISpaceMarine* cur3 = vlc->getUnit(3);
	std::cout << NULL << cur3 <<std::endl;
	delete vlc;
	for (int i = 0; i < vlc2.getCount(); ++i)
	{
		ISpaceMarine* cur2 = vlc2.getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	return (0);
}
