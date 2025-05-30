/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 01:06:42 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/31 00:17:12 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), energy_points(10), attack_damage(0) 
{
	std::cout << "ClapTrap " << name << " constructed!" << std::endl;	
}

ClapTrap::ClapTrap() : name("unkown"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " constructed (default)!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage ;
	std::cout << "ClapTrap " << name << " constructed (copy constructor)!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if(this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage ;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage  << " points of damage!" << std::endl;
		energy_points--;
		return;
	}
	std::cout << "ClapTrap " << name << " can't attack " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " already dead" << std::endl;
		return;
	}
	if(amount >= hit_points)
		hit_points = 0;
	else
		hit_points -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage, hit points now " << hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(hit_points > 0 && energy_points > 0)
	{
		energy_points--;
		hit_points += amount;
		std::cout << "ClapTrap " << name << " repairs itself, regaining " << amount << " hit points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " can't repair" << std::endl;

}
