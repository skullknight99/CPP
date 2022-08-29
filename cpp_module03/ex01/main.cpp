/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:36:24 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/28 12:54:47 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	x("Aatrox");
	ScavTrap	y("Ornn");
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
		x.attack(y.getname());
		y.takeDamage(x.getad());
		y.attack(x.getname());
		y.beRepaired(0);
		x.beRepaired(y.getad());
		x.guardGate();
		y.guardGate();
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