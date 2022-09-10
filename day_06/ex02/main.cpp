/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:34:53 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 14:46:04 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main() {
	srand((unsigned)time(0));
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}
