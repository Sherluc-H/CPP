/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:22:41 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/11 14:14:58 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	this->pony = "pony";
}

Pony::~Pony()
{
	std::cout << "bye" << std::endl;
}

void Pony::drawPony(void)
{
	std::cout << this->pony << std::endl;
}

void Pony::ponyOnTheStack(void)
{
	Pony s_pony;
	std::cout << "on the stack pony" << std::endl;
	s_pony.drawPony();
	//delete s_pony;
}

void Pony::ponyOnTheHeap(void)
{
	Pony *h_pony = new Pony;
	std::cout << "on the heap pony" << std::endl;
	h_pony->drawPony();
	delete h_pony;
}
