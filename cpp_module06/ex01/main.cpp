/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:14:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/18 16:27:55 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void) {
    Data data = {0};
	std::cout << deserialize(serialize(&data)) << std::endl;
	std::cout << data.x << std::endl;
}