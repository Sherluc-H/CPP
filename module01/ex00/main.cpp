/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:23:49 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/30 20:45:28 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony p;
	std::cout << "A magical pony has been allocated on the Stack" << std::endl;
	p.describe();
}

void ponyOnTheHeap()
{
	Pony *p = new Pony();
	std::cout << "A magical pony has been allocated on the Heap" << std::endl;
	p->describe();
	delete p;
}

int	main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "the end" << std::endl;
	return (0);
}
