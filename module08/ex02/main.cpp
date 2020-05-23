/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 00:27:56 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/23 14:55:49 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include "mutantstack.hpp"

int	main()
{
	MutantStack<int> mstack;
	std::cout << mstack.empty() << std::endl;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.empty() << std::endl;

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

	std::cout << "(with list)" << std::endl;
	std::list<int> l;
	std::cout << l.empty() << std::endl;

	l.push_back(5);
	l.push_back(17);
	std::cout << l.empty() << std::endl;

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

	std::cout << "---test2 stack" << std::endl;
	std::stack<int> s1(mstack);
	std::cout << s1.top() << "|" << s1.size() << std::endl;
	std::stack<int> s2(mstack);
	std::cout << s2.top() << "|" << s2.size() << std::endl;
	s2.pop();
	std::cout << s2.top() << "|" << s2.size() << std::endl;
	s2 = s1;
	std::cout << s2.top() << "|" << s2.size() << std::endl;

	std::cout << "---test2 mutantstack" << std::endl;
	MutantStack<int> m1(mstack);
	std::cout << m1.top() << "|" << m1.size() << std::endl;
	MutantStack<int> m2(mstack);
	std::cout << m2.top() << "|" << m2.size() << std::endl;
	m2.pop();
	std::cout << m2.top() << "|" << m2.size() << std::endl;
	m2 = m1;
	std::cout << m2.top() << "|" << m2.size() << std::endl;

	std::cout << "---test2 list" << std::endl;
	std::list<int> l1(l);
	std::cout << l1.back() << "|" << l1.size() << std::endl;
	std::list<int> l2(l);
	std::cout << l2.back() << "|" << l2.size() << std::endl;
	l2.pop_back();
	std::cout << l2.back() << "|" << l2.size() << std::endl;
	l2 = l1;
	std::cout << l2.back() << "|" << l2.size() << std::endl;

	std::cout << "--test str" << std::endl;
	MutantStack<std::string> mstack_str;
	std::cout << mstack_str.empty() << std::endl;

	mstack_str.push("Hello");
	mstack_str.push("World");
	std::cout << mstack_str.empty() << std::endl;

	std::cout << mstack_str.top() << std::endl;
	std::cout << mstack_str.size() << std::endl;

	mstack_str.pop();

	std::cout << mstack_str.top() << std::endl;
	std::cout << mstack_str.size() << std::endl;

	mstack_str.push("W");
	mstack_str.push("O");
	mstack_str.push("R");
	mstack_str.push("L");
	mstack_str.push("D");

	MutantStack<std::string>::iterator it_str = mstack_str.begin();
	MutantStack<std::string>::iterator ite_str = mstack_str.end();

	++it_str;
	--it_str;
	while (it_str != ite_str)
	{
		std::cout << *it_str << std::endl;
		++it_str;
	}
	return 0;
}
