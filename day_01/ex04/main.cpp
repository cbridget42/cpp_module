/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:59:08 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/04 17:20:42 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ft_replace(std::string str, std::string s1, std::string s2) {
	if (s1.empty())
		return str;
	std::string res;
	std::size_t start = 0;
	while (true) {
		std::size_t pos = str.find(s1, start);
		if (pos != std::string::npos) {
			res += str.substr(start, pos - start);
			res += s2;
			start = pos + s1.size();
		} else {
			if (start < str.size())
				res += str.substr(start);
			break;
		}
	}
	return res;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	std::ifstream in_file;
	std::ofstream out_file;
	std::string tmp = argv[1];
	tmp += ".replace";
	in_file.open(argv[1]);
	out_file.open(tmp.c_str());
	if (!in_file.is_open() || !out_file.is_open()) {
		std::cout << "file wasn't opened!" << std::endl;
		return 1;
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	while (true) {
		std::string str;
		std::getline(in_file, str);
		if (!in_file.eof())
			out_file << ft_replace(str, s1, s2);
		else
			break;
		out_file << '\n';
	}
	return 0;
}
