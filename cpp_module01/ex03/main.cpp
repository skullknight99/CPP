/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:30 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/09 14:08:58 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main() {
	
	{
		Weapon	club = Weapon("Crude Spiked Club");

		HumanA	bob("Bob", club);
		bob.Attack();
		club.setType("AK47");
		bob.Attack();
	}
	{
		Weapon	bat = Weapon("Baseball Bat");
		
		HumanB	jim("Jim");
		jim.setWeapon(bat);
		jim.Attack();
		bat.setType("Shotgun");
		jim.Attack();
	}
	return 0;
}