/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:26:46 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 21:26:49 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap ft16("no16");
	FragTrap ft17("no17");
	FragTrap ft18("no18");
	FragTrap ft4(ft18);
	FragTrap ft5;
	ScavTrap st1("scav1");
	ScavTrap st2("scav2");
	ScavTrap st3(st2);
	ScavTrap st4;

	ft16.rangedAttack(ft17.getName());
	ft17.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(ft17.getName());
	ft17.takeDamage(ft16.getRangedAttDam());
	ft16.meleeAttack(ft17.getName());
	ft17.takeDamage(ft16.getMeleeAttDam());
	ft16.meleeAttack(ft17.getName());
	ft17.takeDamage(ft16.getMeleeAttDam());
	ft16.rangedAttack(ft17.getName());
	ft17.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(ft17.getName());
	ft17.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(ft17.getName());
	ft17.takeDamage(ft16.getRangedAttDam());
	ft17.beRepaired(88);
	ft16.beRepaired(2);
	ft16.beRepaired(42);
	ft16.vaulthunter_dot_exe(ft17.getName());
	ft16.vaulthunter_dot_exe(ft17.getName());
	ft16.vaulthunter_dot_exe(ft17.getName());
	ft16.vaulthunter_dot_exe(ft17.getName());
	ft16.vaulthunter_dot_exe(ft17.getName());
	ft16.vaulthunter_dot_exe(ft17.getName());

	st1.challengeNewcomer(ft16.getName());
	st1.challengeNewcomer(ft16.getName());
	st1.challengeNewcomer(ft16.getName());
	st1.beRepaired(10);
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	st1.beRepaired(12);
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	ft16.rangedAttack(st1.getName());
	st1.takeDamage(ft16.getRangedAttDam());
	return (0);
}
