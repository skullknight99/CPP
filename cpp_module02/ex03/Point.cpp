/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:32:44 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/19 11:32:59 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::~Point() {
}

Fixed	Point::getX() const {
	return (this->x);
}

Fixed	Point::getY() const {
	return (this->y);
}

Point::Point(const Point &p) : x(p.x), y(p.y) {
}

Point::Point(float a, float b) : x(a) , y(b) {
}

Point	*Point::operator= (Point &p) {
	(void )p;
	return this;
}
