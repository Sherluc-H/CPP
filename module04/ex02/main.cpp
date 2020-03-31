#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	AssaultTerminator* jim = new AssaultTerminator;
	(void)bob;
	(void)jim;	
	Squad vlc;
	vlc.push(bob);
	vlc.push(jim);
	vlc.push(bob);
	vlc.push(NULL);
	Squad vlc2 = Squad(vlc);
	std::cout << "a" << std::endl;
	vlc2 = Squad(vlc);
	std::cout << "b" << std::endl;
	for (int i = 0; i < vlc.getCount(); ++i)
	{
		ISpaceMarine* cur = vlc.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		ISpaceMarine* cur2 = vlc.getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	ISpaceMarine* cur3 = vlc.getUnit(3);
	std::cout << cur3 <<std::endl;
	//delete vlc;
	system("leaks a.out");
	return (0);
}
