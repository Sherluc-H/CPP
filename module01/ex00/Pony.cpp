/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:22:41 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/30 20:42:28 by lhuang           ###   ########.fr       */
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
	std::cout << "Pony says : \"bye...\"" << std::endl;
}

void Pony::describe(void)
{
	std::cout << "The Magical (more like artificial, computor made) Pony can describe itself, it explains the secret behind what Ponies are, it says that: \"" << this->description << "\"" << std::endl;
}
