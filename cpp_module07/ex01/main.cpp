/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:38:47 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 15:24:01 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template	<typename T> void	print(T const& x) {
	std::cout << x << std::endl;
	return ;
}

int	main() {
	int	arr[] = {0, 1, 2, 3, 4};

	iter(arr, 5, print);
	return (0);
}