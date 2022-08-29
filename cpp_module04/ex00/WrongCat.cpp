/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:35:53 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/29 16:36:12 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Wrong cat created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong cat dead (nobody cares)" << std::endl;
}