/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:45:43 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/17 10:38:58 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace	std;

int	main()
{
	cout << "roundf: \n";
	cout << "7.25 rounded is: " << roundf(7.25) << endl;
	cout << "7.75 rounded is: " << roundf(7.75) << endl;

	cout << "round: \n";
	cout << "7.25 rounded is: " << round(7.25) << endl;
	cout << "7.75 rounded is: " << round(7.75) << endl;
}