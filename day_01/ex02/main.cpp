/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:50:52 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/30 17:59:00 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << "The memory address of the string variable: " << &str \
			<< "\nThe memory address held by stringPTR: " << ptr \
			<< "\nThe memory address held by stringREF: " << &ref << std::endl;
	std::cout << "The value of the string variable: " << str \
			<< "\nThe value pointed to by stringPTR: " << *ptr \
			<< "\nThe value pointed to by stringREF: " << ref << std::endl;
	return 0;
}
