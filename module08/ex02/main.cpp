#include <iostream>
#include "mutantstack.hpp"

int	main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.pop();

	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(1);
	mstack.push(100);
	mstack.push(6);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << *it << std::endl;
	std::cout << *ite << std::endl;

	std::stack<int> s(mstack);
	std::cout << s.top() << "|" << s.size() << std::endl;

	//MutantStack<int> m2(mstack);
	//std::cout << m2.top() << "|" << m2.size() << std::endl;
	return 0;
}
