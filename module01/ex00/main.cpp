/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:23:49 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/11 14:16:56 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void)
{
	Pony p;

	p.ponyOnTheStack();
	p.ponyOnTheHeap();
	//p.drawPony();
	//Pony *p2 = new Pony;
	//p2->ponyOnTheHeap();
	//delete p2;
	//delete p;
	return (0);
}
