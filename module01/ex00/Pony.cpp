/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:22:41 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/22 22:19:22 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
	this->description = "A pony is like a horse but smaller";
}

Pony::~Pony()
{
	std::cout << "Pony "<< this->type << " says : \"bye...\"" << std::endl;
}

void Pony::describe(void)
{
	std::cout << "The Magical (more like artificial, computor made) Pony can describe itself, it explains the secret behind what Ponies are, it says that: \"" << this->description << "\"" << std::endl;
}

void Pony::ponyOnTheStack(void)
{
	Pony s_pony;
	std::cout << "A magical pony has been allocated on the Stack" << std::endl;
	s_pony.type = "on the stack";
	s_pony.describe();
}

void Pony::ponyOnTheHeap(void)
{
	Pony *h_pony = new Pony;
	std::cout << "A magical pony has been allocated on the Heap" << std::endl;
	h_pony->type = "on the heap";
	h_pony->describe();
	delete h_pony;
}
