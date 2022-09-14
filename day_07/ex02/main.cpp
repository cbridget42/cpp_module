/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:28:33 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/14 17:30:34 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

class test {
	public:
		int a;
};

int main() {
	Array<int> x(5);
	x[0] = 42;
	x[1] = 21;
	std::cout << "x= " << x << std::endl;
	Array<int> y = x;
	x[0] = -42;
	std::cout << "y= " << y << std::endl;

	Array<std::string> s(5);
	s[0] = "Hello";
	s[1] = "World!";
	std::cout << "s= " << s << std::endl;

	Array<test> t(3);
	t[0].a = 42;
	std::cout << "t= " << t[0].a << std::endl;

	Array<int> empty;
	try {
		empty[0];
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
	}

	Array<int> lol(0);

	return 0;
}
