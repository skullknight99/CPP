/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:41:46 by acmaghou          #+#    #+#             */
/*   Updated: 2022/06/08 09:51:22 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace	std;

int	main(){
	int	x;
	while(1)
	{
		cout << "Enter a number to multiply by 2: ";
		cin >> x;
		if (!cin)
			break;
		cout << x*2 << endl;
	}
}