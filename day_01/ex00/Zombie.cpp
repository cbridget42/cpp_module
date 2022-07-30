/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:32:12 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/30 16:29:52 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_zombie) {
	name = new_zombie;
}

Zombie::~Zombie() {
	std::cout << name << ": I'm destroyed!\n";
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
