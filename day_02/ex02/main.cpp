/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:18:39 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/10 13:34:26 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\nother tests:\n";
	Fixed x(2.5f);
	Fixed y(2.0f);
	std::cout << x << "*" << y << "=" << x * y << std::endl;
	std::cout << x << "/" << y << "=" << x / y << std::endl;
	std::cout << x << "+" << y << "=" << x + y << std::endl;
	std::cout << x << "-" << y << "=" << x - y << std::endl;
	if (x > y)
		std::cout <<  x << ">" << y << std::endl;
	else
		std::cout << x << "<" << y << std::endl;
	
	return 0;
}
