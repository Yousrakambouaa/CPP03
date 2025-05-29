/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 01:24:34 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/29 20:14:52 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int	main()
{
	
	// ClapTrap bmo("bmo");

	// bmo.attack("jack");
	// bmo.takeDamage(2);
	// bmo.beRepaired(1);


	ScavTrap	serena("serena");
	serena.attack("ex");
	serena.beRepaired(12);
	serena.takeDamage(14);
	serena.guardGate();

}