/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:50:34 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/27 11:58:41 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void ) {
	DiamondTrap	x("saad");
	DiamondTrap	y("Achraf");
	std::cout << "FIGHTERS ON THE RING, TOUCH EACH OTHERS GLOVES" << std::endl;
	std::cout << "////////////////////////" << std::endl;
	x.highFivesGuys();
	y.highFivesGuys();
	std::cout << "------ FIGHT!!!!! ---------" << std::endl;
	while (y.gethp() || x.gethp())
	{
		std::cout << x.DiamondName() << std::endl;
		std::cout << "Hit Points: " << x.gethp() << std::endl;
		std::cout << "Mana: "<< x.getmana() << std::endl;
		std::cout << "Attack Damage: "<< x.getad() << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << y.DiamondName() << std::endl;
		std::cout << "Hit Points: " << y.gethp() << std::endl;
		std::cout << "Mana: "<< y.getmana() << std::endl;
		std::cout << "Attack Damage: "<< y.getad() << std::endl;
		std::cout << "============================" << std::endl;
		x.attack(y.DiamondName());
		y.takeDamage(x.getad());
		y.attack(x.DiamondName());
		y.beRepaired(0);
		x.beRepaired(y.getad());
		std::cout << ".//////////////////." << std::endl;
		std::cout << "summary of the round:" << std::endl;
		if (y.gethp() <= 0 || x.gethp() <= 0)
		{
			std::cout << y.DiamondName() << " is dead" << std::endl;
			break;
		}
		if (x.getmana() == 0 || y.getmana() == 0)
		{
			std::cout << "not enough mana to cast an attack or a heal" << std::endl;
			break;
		}
	}
	return (0);
}