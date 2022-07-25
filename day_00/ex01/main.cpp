/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:59:41 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/25 20:58:16 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
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

bool ft_getline(std::string *line)
{
	std::getline(std::cin, *line);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return false;
	}
	return true;
}

void print_row(std::string &str)
{
	int length = str.size();
	for (int i = 0; i < 10; i++){
		if (i == 9 && length > 10)
			std::cout << '.';
		else if (i < length)
			std::cout << static_cast<char>(str.at(i));
		else
			std::cout << ' ';
	}
	std::cout << '|';
	return;
}
