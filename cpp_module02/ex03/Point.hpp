/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:32:50 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/19 11:33:04 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point();
		Point(float a, float b);
		~Point();
		Point(const Point &p);
		Fixed	getX() const;
		Fixed	getY() const;
		Point	*operator= (Point &p);
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
#endif