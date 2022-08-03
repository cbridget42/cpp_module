/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:38:20 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/02 14:19:56 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) {
	name = str;
	gun = 0;
}

void HumanB::attack(void) {
	if (gun)
		std::cout << name << " attacks with their " << gun->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_gun) {
	gun = &new_gun;
}
