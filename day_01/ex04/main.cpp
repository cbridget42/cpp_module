/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:59:08 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/02 15:21:30 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	(void)argc;
	std::ifstream file(argv[1]);
	if ((file.rdstate() & std::ifstream::failbit)) {
		std::cout << "file wasn't opened!\n";
		return 1;
	}
	return 0;
}
