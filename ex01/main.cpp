/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 01:24:34 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/31 20:01:51 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	serena("serena");

	serena.attack("ex");
	serena.attack("savy");
	serena.attack("sari");
	serena.takeDamage(14);
	serena.beRepaired(12);
	serena.guardGate();
}

