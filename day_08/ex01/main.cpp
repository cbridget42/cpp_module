/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:21:05 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/19 17:54:06 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << '\n';
	srand(time(0));
	std::vector<int> test;
	for (int i = 0; i < 10001; i++) {
		test.push_back(rand());
	}
	Span spn(10000);
	try {
		spn.addNumbers(test.begin(), test.end());
	} catch (std::exception &e) {
		std::cout << e.what() << '\n';
	}

	std::cout << std::endl;
	spn.addNumbers(test.begin(), test.end() - 1);
	std::cout << spn.shortestSpan() << std::endl;
	std::cout << spn.longestSpan() << std::endl;
	return 0;
}
