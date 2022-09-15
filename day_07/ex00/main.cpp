/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:07:14 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/15 14:50:42 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Test {
	public:
		Test(int t): _t(t) {}
		bool operator<(Test const &rhs) const {return (this->_t < rhs._t);}
		int _t;
};

std::ostream &operator<<(std::ostream &o, const Test &a) {o<<a._t; return o;}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Test x(50), y(100);
	std::cout << '\n' << min(x, y) << std::endl;
	swap(x, y);
	std::cout << "x=" << x << ", y=" << y <<std::endl;

	return 0;
}
