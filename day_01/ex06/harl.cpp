/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:50:03 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/05 15:53:43 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl(void) {
	arrayF[0] = &harl::debug;
	arrayF[1] = &harl::info;
	arrayF[2] = &harl::warning;
	arrayF[3] = &harl::error;
}

void harl::complain(std::string level) {
	complains lvl = c_invalid_arg;
	std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (names[i] == level) {
			lvl = static_cast<complains>(i);
			break;
		}
	}
	switch (lvl) {
		case c_debug:
			(this->*arrayF[c_debug])();
			__attribute__ ((fallthrough));
		case c_info:
			(this->*arrayF[c_info])();
			__attribute__ ((fallthrough));
		case c_warning:
			(this->*arrayF[c_warning])();
			__attribute__ ((fallthrough));
		case c_error:
			(this->*arrayF[c_error])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void harl::debug(void) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void harl::info(void) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void harl::warning(void) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void harl::error(void) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
