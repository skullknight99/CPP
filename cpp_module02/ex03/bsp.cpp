/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:32:41 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/19 11:34:37 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define XCOR	getX().toFloat()
#define YCOR	getY().toFloat()
#define ABS(X)	X > 0 ? X : -X
static float	area(float x1, float y1, float x2, float y2, float x3, float y3) {
	float	surface = roundf((x1*(y2 -y3) + x2*(y3 - y1) + x3*(y1 - y2))/2);
	return ABS(surface);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	float	mainTriArea = area(a.XCOR, a.YCOR, b.XCOR, b.YCOR, c.XCOR, c.YCOR);
	float	area1 = area(a.XCOR, a.YCOR, b.XCOR, b.YCOR, point.XCOR, point.YCOR);
	float	area2 = area(a.XCOR, a.YCOR, c.XCOR, c.YCOR, point.XCOR, point.YCOR);
	float	area3 = area(c.XCOR, c.YCOR, b.XCOR, b.YCOR, point.XCOR, point.YCOR);
	
	if (area1 + area2 + area3 == mainTriArea)
		return (true);
	return (false);
}