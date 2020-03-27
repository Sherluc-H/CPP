#include <iostream>
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap ft16("no16");
	FragTrap ft17("no17");
	FragTrap ft18("no18");
	FragTrap ft4(ft18);

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
	return (0);
}
