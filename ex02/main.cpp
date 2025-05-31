/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 01:24:34 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/31 20:44:32 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	
	{	
		ScavTrap	serena("serena");
		serena.attack("ex");
		serena.beRepaired(12);
		serena.takeDamage(14);
		serena.guardGate();
	}

	std::cout << "=========================================================" <<  std::endl;

	FragTrap	lex("lex");
	lex.attack("lex000000001");
	lex.beRepaired(1);
	lex.takeDamage(122);
	lex.highFivesGuys();
}