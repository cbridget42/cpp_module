/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:42:05 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 14:44:48 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
	int i = rand() % 3;
	if (i == 2)
		return new A();
	else if (i == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "p: A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "p: B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "p: C\n";
}

void identify(Base& p) {
	try {
		dynamic_cast<A &>(p);
		std::cout << "p: A\n";
		return;
	}
	catch (std::exception &e){
	}
	try {
		dynamic_cast<B &>(p);
		std::cout << "p: B\n";
		return;
	}
	catch (std::exception &e){
	}
	try {
		dynamic_cast<C &>(p);
		std::cout << "p: C\n";
		return;
	}
	catch (std::exception &e){
	}
}
