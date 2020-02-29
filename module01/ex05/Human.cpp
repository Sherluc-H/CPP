/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:53:42 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/13 16:08:22 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	this->brain = new Brain();
}

Human::~Human()
{
	delete this->brain;
}

std::string Human::identify(void)
{
	std::ostringstream address;

	address << this->brain;
	return (address.str());
}

const Brain& Human::getBrain(void)
{
	return (*this->brain);
}
