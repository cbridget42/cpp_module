/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:51:26 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 13:00:18 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
