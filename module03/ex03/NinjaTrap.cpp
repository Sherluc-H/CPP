/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 21:49:43 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 23:27:59 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "Create NINJ4-TP with default constructor" << std::endl;
	this->hit_pts = 60;
	this->max_hit_pts = 60;
	this->nrg_pts = 120;
	this->max_nrg_pts = 120;
	this->level = 1;
	this->name = "no name";
	this->melee_att_dam = 60;
	this->ranged_att_dam = 5;
	this->armor_dam_reduc = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destroy NINJ4-TP [" << this->name << "]" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& nt)
{
	std::cout << "Create NINJ4-TP with copy constructor from " << nt.name << std::endl;
	*this = nt;
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "Create NINJ4-TP [" << name << "] with param constructor" << std::endl;
	this->hit_pts = 60;
	this->max_hit_pts = 60;
	this->nrg_pts = 120;
	this->max_nrg_pts = 120;
	this->level = 1;
	this->name = name;
	this->melee_att_dam = 60;
	this->ranged_att_dam = 5;
	this->armor_dam_reduc = 0;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap& nt)
{
	this->hit_pts = nt.hit_pts;
	this->max_hit_pts = nt.max_hit_pts;
	this->nrg_pts = nt.nrg_pts;
	this->max_nrg_pts = nt.max_nrg_pts;
	this->level = nt.level;
	this->name = nt.name;
	this->melee_att_dam = nt.melee_att_dam;
	this->ranged_att_dam = nt.ranged_att_dam;
	this->armor_dam_reduc = nt.armor_dam_reduc;
	return (*this);
}

void NinjaTrap::ninjaShoebox(const ClapTrap & ct)
{
	(void)ct;
	if (this->nrg_pts < 25)
	{
		std::cout << "NINJ4-TP [" << this->name << "] doesn't have enough energy to launch special attack on the CL4P-TP" << std::endl;
		return ;
	}
	this->nrg_pts = this->nrg_pts - 25;
	std::cout << "NINJ4-TP [" << this->name << "] launches special attack but realise it's a CL4P-TP, " << this->name << " can't cancel the spell so aim wrong instead (current " << this->nrg_pts << "/" << this->max_nrg_pts << "ep)" << std::endl;

}

void NinjaTrap::ninjaShoebox(const FragTrap & ft)
{
	(void)ft;
	if (this->nrg_pts < 25)
	{
		std::cout << "NINJ4-TP [" << this->name << "] doesn't have enough energy to launch special attack on the FR4G-TP" << std::endl;
		return ;
	}
	this->nrg_pts = this->nrg_pts - 25;
	std::cout << "NINJ4-TP [" << this->name << "] launches special attack stay still hoping the strong FR4G-TP  will see him as a status (current " << this->nrg_pts << "/" << this->max_nrg_pts << "ep)" << std::endl;

}

void NinjaTrap::ninjaShoebox(const ScavTrap & st)
{
	(void)st;
	if (this->nrg_pts < 25)
	{
		std::cout << "NINJ4-TP [" << this->name << "] doesn't have enough energy to launch special attack on the SC4V-TP" << std::endl;
		return ;
	}
	this->nrg_pts = this->nrg_pts - 25;
	std::cout << "NINJ4-TP [" << this->name << "] launches special attack intense stare and try to impress the SC4V-TP (current " << this->nrg_pts << "/" << this->max_nrg_pts << "ep)" << std::endl;

}

void NinjaTrap::ninjaShoebox(const NinjaTrap & nt)
{
	(void)nt;
	if (this->nrg_pts < 25)
	{
		std::cout << "NINJ4-TP [" << this->name << "] doesn't have enough energy to launch special attack on the NINJ4-TP" << std::endl;
		return ;
	}
	this->nrg_pts = this->nrg_pts - 25;
	std::cout << "NINJ4-TP [" << this->name << "] launches special attack hidden ninja dance to try to be friend with the NINJ4-TP but " << this->name << " was too far (current " << this->nrg_pts << "/" << this->max_nrg_pts << "ep)" << std::endl;

}
