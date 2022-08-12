/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:48:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/12 12:29:18 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {

	int	N;
	std::cin >> N;
	Zombie*	zombs = zombieHorde(N, "zombieee");
	delete[] zombs;
}