/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:37:06 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/30 17:15:51 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
	Zombie *array_z = zombieHorde(5, "Horde");
	for (int i = 0; i < 5; i++) {
		array_z[i].announce();
	}
	delete [] array_z;
	return 0;
}
