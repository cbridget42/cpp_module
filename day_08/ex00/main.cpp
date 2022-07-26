/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:01:30 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/18 11:47:26 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	int t1[] = {1, 3, 42, 7, 9, 21};
	std::vector<int> test1(t1, t1 + sizeof(t1) / sizeof(int));
	std::list<int> test2(t1, t1 + sizeof(t1) / sizeof(int));

	std::cout << "test1= " << *easyfind(test1, 42) << '\n' \
	<< "test2= " << *easyfind(test2, 21) << '\n';

	try {
		easyfind(test1, 2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
