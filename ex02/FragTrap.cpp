/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:31:19 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/29 20:41:10 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap constructor called for " << name  << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called " << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if(this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage ;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destrooyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage  << " points of damage!" << std::endl;
		energy_points--;
		return;
	}
	std::cout << "can't attack " << std::endl;
}


void FragTrap::highFivesGuys() const
{
	std::cout << "FragTrap " << name << " says: high five anyone" << std::endl;
}


