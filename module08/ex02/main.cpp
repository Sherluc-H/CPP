/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 00:27:56 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/29 02:20:45 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
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

	std::stack<int> s1(mstack);
	std::cout << s1.top() << "|" << s1.size() << std::endl;
	std::stack<int> s2(mstack);
	std::cout << s2.top() << "|" << s2.size() << std::endl;
	s2.pop();
	std::cout << s2.top() << "|" << s2.size() << std::endl;
	s2 = s1;
	std::cout << s2.top() << "|" << s2.size() << std::endl;

	MutantStack<int> m1(mstack);
	std::cout << m1.top() << "|" << m1.size() << std::endl;
	MutantStack<int> m2(mstack);
	std::cout << m2.top() << "|" << m2.size() << std::endl;
	m2.pop();
	std::cout << m2.top() << "|" << m2.size() << std::endl;
	m2 = m1;
	std::cout << m2.top() << "|" << m2.size() << std::endl;

	std::cout << "(with list)" << std::endl;
	std::list<int> l;

	l.push_back(5);
	l.push_back(17);

	std::cout << l.back() << std::endl;
	std::cout << l.size() << std::endl;

	l.pop_back();

	std::cout << l.back() << std::endl;
	std::cout << l.size() << std::endl;

	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(42);
	l.push_back(1);
	l.push_back(100);
	l.push_back(6);

	std::list<int>::iterator itl = l.begin();
	std::list<int>::iterator itel = l.end();

	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	std::list<int> l1(l);
	std::cout << l1.back() << "|" << l1.size() << std::endl;
	std::list<int> l2(l);
	std::cout << l2.back() << "|" << l2.size() << std::endl;
	l2.pop_back();
	std::cout << l2.back() << "|" << l2.size() << std::endl;
	l2 = l1;
	std::cout << l2.back() << "|" << l2.size() << std::endl;

	return 0;
}
