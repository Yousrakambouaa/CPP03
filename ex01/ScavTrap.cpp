/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:09:35 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/31 20:13:20 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
	gateMode = false;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	gateMode = false;
	hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap constructor called for " << name  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	this->gateMode = other.gateMode;
    std::cout << "ScavTrap copy constructor called " << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if(this != &other)
	{
		this->gateMode = other.gateMode;
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage ;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destrooyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_points > 0 && this->energy_points > 0)
	{
		energy_points--;
		std::cout << "ScavTrap " << name << " attacks " << target << ", energy points now : " << energy_points << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " can't attack " << std::endl;
}

void    ScavTrap::guardGate()
{
	this->gateMode = true;
    std::cout << "ScavTrap " << name << " is now in gate guard mode!" << std::endl;
}
