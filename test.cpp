/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:49:33 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/03 15:49:14 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
using namespace	std;

class	Enemy {
	public:
		virtual	void	attack() = 0;
};

class Ninja : public Enemy
{
	public:
		void	attack() {
			cout << "ninja attack!\n";
		}
};

class Monster : public	Enemy
{
	public:
		void	attack() {
			cout << "monster attack!\n";
		}
};

int	main() {
	Ninja	n;
	Monster	m;
	
	Enemy	*enemy1	= &n;
	Enemy	*enemy2	= &m;

	enemy1->attack();
	enemy2->attack();
}