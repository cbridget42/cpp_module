/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:36:53 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/02 14:36:12 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
	this->type = name;
}

const std::string &Weapon::getType() {
	return type;
}

void Weapon::setType(std::string name){
	type = name;
}
