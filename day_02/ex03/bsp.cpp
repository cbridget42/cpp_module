/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:25:25 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/10 16:22:54 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed m = (a.getFixedx() - point.getFixedx()) * (b.getFixedy() - a.getFixedy()) - (b.getFixedx() - a.getFixedx()) * (a.getFixedy() - point.getFixedy());
	Fixed n = (b.getFixedx() - point.getFixedx()) * (c.getFixedy() - b.getFixedy()) - (c.getFixedx() - b.getFixedx()) * (b.getFixedy() - point.getFixedy());
	Fixed k = (c.getFixedx() - point.getFixedx()) * (a.getFixedy() - c.getFixedy()) - (a.getFixedx() - c.getFixedx()) * (c.getFixedy() - point.getFixedy());
	if ((m.toFloat() < 0 && n.toFloat() < 0 && k.toFloat() < 0) || (m.toFloat() > 0 && n.toFloat() > 0 && k.toFloat() > 0))
		return true;
	else
		return false;
}
