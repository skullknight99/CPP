/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:32:44 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/18 18:42:23 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(float a, float b) : x(a) , y(b) {
}

Point&	Point::operator= (const Point &obj) {
	return *this;
}