/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 01:24:34 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/31 00:23:38 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

int	main()
{
	{	
		ClapTrap	bmo("bmo");
		ClapTrap	ct;

		bmo.attack("jack");
		bmo.takeDamage(2);
		bmo.beRepaired(1);

		ct.attack("bmo");
		ct.takeDamage(0);
	}
	std::cout << "end of main" << std::endl;
}
