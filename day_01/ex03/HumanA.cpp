/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:37:34 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/02 13:54:53 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &new_gun) : gun(new_gun) {
	name = str;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << gun.getType() << std::endl;
}
