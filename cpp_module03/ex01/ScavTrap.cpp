/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:31:37 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/26 12:37:28 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
}

void	ScavTrap::guardGate() {
	std::cout << this->getname() << " is now on gate keeper mode" << std::endl;
}