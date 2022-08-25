/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:36:24 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/25 12:00:11 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap	x("Iori");
	while (x.getmana() || x.gethp())
	{
		std::cout << "Hit Points: " << x.gethp() << std::endl;
		std::cout << "Mana: "<< x.getmana() << std::endl;
		std::cout << "Attack Damage: "<< x.getad() << std::endl;
		std::cout << "============================" << std::endl;
		x.attack("Kyo Kusanagi");
		x.takeDamage(0);
		x.beRepaired(1);
		std::cout << "summary of the round:" << std::endl;
		if (x.gethp() <= 0)
		{
			std::cout << x.getname() << " is dead" << std::endl;
			break;
		}
		if (x.getmana() <= 0)
		{
			std::cout << "not enough mana to cast an attack or a heal" << std::endl;
			break;
		}
	}
	return (0);
}