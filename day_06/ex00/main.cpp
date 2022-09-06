/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:48:05 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/03 21:31:03 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyExeptions.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

void convert_value(std::string str);
bool check_dot(std::string &str);
void convert_res(char c);
void convert_res(int i);
void convert_res(double d);
void convert_res(std::string &str);

int main(int argc, char **argv) {
	try
	{
		if (argc != 2)
			throw WrongNumbArgExeption();
		convert_value(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}

void convert_value(std::string str) {
	std::stringstream ss(str);
	if (str.size() == 1 && str.find_first_of("1234567890") == std::string::npos) {
		convert_res(str.at(0));
	} else if (str == "-inff" || str == "+inff" || str == "nanf" || \
				str == "-inf" || str == "+inf" || str == "nan") {
		convert_res(str);
	} else if (str.find_first_not_of("-+1234567890") == std::string::npos) {
		int num;
		if ((ss>>num).fail())
			throw OverflowExeption();
		convert_res(num);
	} else if (str.find_first_not_of("-+1234567890.f") == std::string::npos && \
				str.find('f') == str.size() - 1 && check_dot(str)) {
		float num;
		if ((ss>>num).fail())
			throw OverflowExeption();
		convert_res(static_cast<double>(num));
	} else if (str.find_first_not_of("-+1234567890.") == std::string::npos && \
				check_dot(str)) {
		double num;
		if ((ss>>num).fail())
			throw OverflowExeption();
		convert_res(num);
	} else
		throw NotCorectExeption();
}

bool check_dot(std::string &str) {
	if (str.find('.') == std::string::npos)
		return false;
	if (str.find_first_of('.') != str.find_last_of('.'))
		return false;
	return true;
}

void convert_res(char c) {
	if (isprint(c))
		std::cout << "char: '" << c << '\'';
	else
		std::cout << "char: Non displayable";
	std::cout.unsetf(std::ios::floatfield);
	std::cout.precision(1);
	std::cout << "char: " << c << "\nint: " << static_cast<int>(c) << "\nfloat: " \
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
