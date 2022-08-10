/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:06:07 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/10 16:26:55 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
	Point a;
	Point b(2.3f, 5.4f);
	Point c(8.5f, 0.0f);
	Point point1(1.0f, 1.0f);
	Point point2(20.4f, 28.3f);

	Point a1(2, 3);
	Point b1(6, 8);
	Point c1(14, 1);
	Point point3(5, 3);
	Point point4(-8, -9);

	std::cout << "first triangle: a.y=" << a.getFixedy() << " a.x=" << a.getFixedx() << " b.y=" << b.getFixedy() << " b.x=" << b.getFixedx() \
			<< " c.y=" << c.getFixedy() << " c.x" <<c.getFixedx() << "\npoint1.x=" << point1.getFixedx() << " point1.y=" << point1.getFixedy() \
			<< "\npoint2.x=" << point2.getFixedx() << " point2.y=" << point2.getFixedy() << std::endl;
	if (bsp(a, b, c, point1))
		std::cout << "point1 is inside of a first triangle" << std::endl;
	if (!bsp(a, b, c, point2))
		std::cout << "point2 is outside of a first triangle" << std::endl;
	std::cout << "\nsecond triangle: a.y=" << a1.getFixedy() << " a.x=" << a1.getFixedx() << " b.y=" << b1.getFixedy() << " b.x=" << b1.getFixedx() \
			<< " c.y=" << c1.getFixedy() << " c.x" <<c1.getFixedx() << "\npoint3.x=" << point3.getFixedx() << " point3.y=" << point3.getFixedy() \
			<< "\npoint4.x=" << point4.getFixedx() << " point4.y=" << point4.getFixedy() << std::endl;
	if (bsp(a1, b1, c1, point3))
		std::cout << "point3 is inside of a second triangle" << std::endl;
	if (!bsp(a1, b1, c1, point4))
		std::cout << "point4 is outside of a second triangle" << std::endl;
	return 0;
}
