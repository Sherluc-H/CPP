/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:52:36 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/13 16:09:31 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify(void) const
{
	std::ostringstream address;

	address << this;
	//std::cout << this << std::endl;
	return (address.str());
}
