/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 01:24:34 by ykamboua          #+#    #+#             */
/*   Updated: 2025/05/28 01:48:19 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

int	main()
{
	ClapTrap bmo("bmo");

	bmo.attack("jack");
	bmo.takeDamage(2);
	bmo.beRepaired(1);

}