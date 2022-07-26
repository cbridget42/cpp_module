/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:59:41 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/26 16:22:48 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main(void) {
	PhoneBook phonebook;
	std::string tmp;
	while (true) {
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, tmp);
		if (tmp == "ADD")
			phonebook.addnewcont();
		else if (tmp == "SEARCH")
			phonebook.search();
		else if (tmp == "EXIT")
			break;
		if (std::cin.eof())
			break;
	}
	return 0;
}
