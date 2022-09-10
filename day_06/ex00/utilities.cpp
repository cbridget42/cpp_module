/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:34:51 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 12:43:21 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void convert_res(char c) {
	if (isprint(c))
		std::cout << "char: '" << c << '\'';
	else
		std::cout << "char: Non displayable";
	std::cout.unsetf(std::ios::floatfield);
	std::cout.precision(1);
	std::cout << "\nint: " << static_cast<int>(c) << "\nfloat: " \
	<< std::fixed << static_cast<float>(c) << "f\ndouble: " << static_cast<double>(c) << std::endl;
}

void convert_res(int i) {
	if ((i >= std::numeric_limits<char>::min() && \
		i <= std::numeric_limits<char>::max()) && isprint(static_cast<char>(i)))
		std::cout << "char: '" << static_cast<char>(i) << '\'';
	else
		std::cout << "char: Non displayable";
	std::cout << "\nint: " << i;
	std::cout << "\nfloat: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << 'f' \
	<< "\ndouble: " << static_cast<double>(i) << std::endl;
}

void convert_res(double d) {
	if ((d >= std::numeric_limits<char>::min() && \
		d <= std::numeric_limits<char>::max()) && isprint(static_cast<char>(d)))
		std::cout << "char: '" << static_cast<char>(d) << '\'';
	else
		std::cout << "char: Non displayable";
	if (d >= std::numeric_limits<int>::min() && \
		d <= std::numeric_limits<int>::max())
		std::cout << "\nint: " << static_cast<int>(d);
	else
		std::cout << "\nint: overflow";
	if ((d >= std::numeric_limits<float>::min() && \
		d <= std::numeric_limits<float>::max()) || \
		(-d >= std::numeric_limits<float>::min() && \
		-d <= std::numeric_limits<float>::max()))
		std::cout << "\nfloat: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << 'f';
	else
		std::cout << "\nfloat: overflow";
	std::cout << "\ndouble: " << d << std::endl;
}

void convert_res(std::string &str) {
	std::cout << "char: impossible\nint: impossible";
	if (str.size() == 5 || (str.at(0) == 'n' && str.size() == 4))
		std::cout << "\nfloat: " << str << "\ndouble: " << str.substr(0, str.size() - 1) << std::endl;
	else
		std::cout << "\nfloat: " << str << "f\ndouble: " << str << std::endl;
}
