/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:50:34 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/26 15:54:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void ) {
	FragTrap	x("Raja");
	FragTrap	y("Achraf");
	while (y.gethp() || x.gethp())
	{
		std::cout << x.getname() << std::endl;
		std::cout << "Hit Points: " << x.gethp() << std::endl;
		std::cout << "Mana: "<< x.getmana() << std::endl;
		std::cout << "Attack Damage: "<< x.getad() << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << y.getname() << std::endl;
		std::cout << "Hit Points: " << y.gethp() << std::endl;
		std::cout << "Mana: "<< y.getmana() << std::endl;
		std::cout << "Attack Damage: "<< y.getad() << std::endl;
		std::cout << "============================" << std::endl;
		x.highFivesGuys();
		y.highFivesGuys();
		x.attack(y.getname());
		y.takeDamage(x.getad());
		y.attack(x.getname());
		y.beRepaired(0);
		x.beRepaired(y.getad());
		std::cout << ".//////////////////." << std::endl;
		std::cout << "summary of the round:" << std::endl;
		if (y.gethp() <= 0 || x.gethp() <= 0)
		{
			std::cout << y.getname() << " is dead" << std::endl;
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