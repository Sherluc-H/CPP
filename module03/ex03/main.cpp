#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
	NinjaTrap nt1("ninja1");
	NinjaTrap nt2("ninja2");
	NinjaTrap nt3;

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

	ft16.rangedAttack(nt1.getName());
	nt1.takeDamage(ft16.getRangedAttDam());
	nt1.rangedAttack(ft16.getName());
	ft16.takeDamage(nt1.getRangedAttDam());
	nt1.meleeAttack(ft16.getName());
	ft16.takeDamage(nt1.getMeleeAttDam());
	nt1.ninjaShoebox(ft16);
	nt1.ninjaShoebox(st1);
	nt1.ninjaShoebox(nt2);
	nt1.ninjaShoebox(nt2);
	nt1.ninjaShoebox(nt2);
	nt1.ninjaShoebox(nt2);
	return (0);
}
