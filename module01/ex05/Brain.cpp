/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:52:36 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 00:16:55 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>
#include "Brain.hpp"

std::string Brain::identify(void) const
{
	std::ostringstream address;

	address << this;
	return (address.str());
}
