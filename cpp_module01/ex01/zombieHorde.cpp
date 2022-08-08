/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:48:33 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/08 18:03:09 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zom = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zom[i] = Zombie(name);
		zom[i].announce();
	}
	return zom;
}