/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:48:35 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/09 08:52:28 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	
}

void	Zombie::giveName( std::string name) {
	this->name = name;
}

// Zombie::Zombie(const Zombie &obj) {
// 	this->name = obj.name;
// }

Zombie::~Zombie( void ) {
	std::cout << this->name << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}