/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:14:06 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/18 14:51:47 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define	DATA_HPP

#include <iostream>
#include <ostream>
#include <stdint.h>

struct	Data {
	int		x;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);	

#endif