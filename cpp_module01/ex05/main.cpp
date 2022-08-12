/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:16:13 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/12 08:52:17 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int	main()
{
	Harl	taylorswift;
	std::string	cmd;
	getline(std::cin, cmd);
	taylorswift.complain(cmd);
}