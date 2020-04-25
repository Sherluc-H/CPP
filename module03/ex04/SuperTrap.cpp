/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 23:01:01 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 23:22:25 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "default SUPER-TP Created" << std::endl;
	this->level = 1;
	this->name = "no name";
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << " SUPER-TP destoyed" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& spt)
{
	std::cout << this->name << " SUPER-TP Created with copy constructor" << std::endl;
	*this = spt;
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << name << " SUPER-TP Created with param" << std::endl;
	this->level = 1;
	this->name = name;
}

SuperTrap &SuperTrap::operator=(const SuperTrap& spt)
{
	this->hit_pts = spt.hit_pts;
	this->max_hit_pts = spt.max_hit_pts;
	this->nrg_pts = spt.nrg_pts;
	this->max_nrg_pts = spt.max_nrg_pts;
	this->level = spt.level;
	this->name = spt.name;
	this->melee_att_dam = spt.melee_att_dam;
	this->ranged_att_dam = spt.ranged_att_dam;
	this->armor_dam_reduc = spt.armor_dam_reduc;
	return (*this);
}
