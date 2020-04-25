/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:51:01 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 21:51:14 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "A SC4V-TP created with default constructor" << std::endl;
	this->hit_pts = 100;
	this->max_hit_pts = 100;
	this->nrg_pts = 50;
	this->max_nrg_pts = 50;
	this->level = 1;
	this->name = "no name";
	this->melee_att_dam = 20;
	this->ranged_att_dam = 15;
	this->armor_dam_reduc = 3;
	srand(time(NULL));
}

ScavTrap::~ScavTrap()
{
	std::cout << "[" << this->name << "] SC4V-TP destroyed" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& st)
{
	std::cout << "A SC4V-TP created with copy constructor from [" << st.name << "]" << std::endl;
	*this = st;
	srand(time(NULL));
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "[" << name << "] SC4V-TP created with param constructor" << std::endl;
	this->hit_pts = 100;
	this->max_hit_pts = 100;
	this->nrg_pts = 50;
	this->max_nrg_pts = 50;
	this->level = 1;
	this->name = name;
	this->melee_att_dam = 20;
	this->ranged_att_dam = 15;
	this->armor_dam_reduc = 3;
	srand(time(NULL));
}

ScavTrap &ScavTrap::operator=(const ScavTrap& st)
{
	this->hit_pts = st.hit_pts;
	this->max_hit_pts = st.max_hit_pts;
	this->nrg_pts = st.nrg_pts;
	this->max_nrg_pts = st.max_nrg_pts;
	this->level = st.level;
	this->name = st.name;
	this->melee_att_dam = st.melee_att_dam;
	this->ranged_att_dam = st.ranged_att_dam;
	this->armor_dam_reduc = st.armor_dam_reduc;
	return (*this);
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int rand_num;
	std::string challenges[3] = {"The Loudest", "Guess The Number", "Hold Breath"};

	if (this->nrg_pts < 25)
	{
		std::cout << "SC4V-TP " << this->name << " doesn't have enough energy points to challenge " << target << std::endl;
		return ;
	}
	rand_num = rand() % 3;
	std::cout << "SC4V-TP " << this->name << " challenges " << target << " to a " << challenges[rand_num] << " challenge" << std::endl;
	this->nrg_pts = this->nrg_pts - 25;
	std::cout << "SC4V-TP " << this->name << " warms up and consumes 25 energy points ("<< this->nrg_pts << "/" << this->max_nrg_pts << "ep)" << std::endl;
	std::cout << target << " ignores the challenge " << this->name << " wins by forfeit" << std::endl;
}
