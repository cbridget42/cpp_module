/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:39:19 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/30 17:10:30 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie() {
	std::cout << name << ": I'm destroyed!\n";
}

void Zombie::init_zombie(std::string new_zombie) {
	name = new_zombie;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
