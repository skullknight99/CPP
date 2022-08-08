/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:32:12 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/08 12:44:02 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*zombie1 = newZombie("Karthus");
	Zombie	*zombie2 = newZombie("Sion");
	Zombie	*zombie3 = newZombie("Pyke");

	randomChump("Hecarim");
	randomChump("Mordekaiser");
	randomChump("Thresh");
	delete	zombie1;
	delete	zombie2;
	delete	zombie3;
}
