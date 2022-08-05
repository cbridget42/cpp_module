/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:49:27 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/05 15:19:30y cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	harl test = harl();
	test.complain(argv[1]);
	return 0;
}
