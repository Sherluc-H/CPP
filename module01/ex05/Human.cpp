/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:53:42 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 01:28:39 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Human.hpp"

Human::Human()
{}

std::string Human::identify(void) const
{
	return (this->brain.identify());
}

const Brain& Human::getBrain(void)
{
	return (this->brain);
}
