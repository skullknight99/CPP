/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:36:24 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/24 13:14:09 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap	x("Iori");
	
	for (int i = 0; i < 15; i++)
	{
		x.attack("Kyo Kusanagi");
		x.takeDamage(1);
	}
}