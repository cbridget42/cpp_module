/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:22:20 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 13:23:14 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat a("a", 1), b("b", 145);
	AForm *c = new ShrubberyCreationForm("c");
	AForm *d = new RobotomyRequestForm("d");
	AForm *g = new PresidentialPardonForm("g");

	a.executeForm(*c);
	std::cout << '\n';

	a.signForm(*c);
	a.signForm(*d);
	a.signForm(*g);
	std::cout << '\n';

	b.executeForm(*c);
	b.executeForm(*d);
	b.executeForm(*g);
	
	std::cout << '\n';
	a.executeForm(*c);
	std::cout << '\n';
	a.executeForm(*d);
	std::cout << '\n';
	a.executeForm(*g);

	delete c;
	delete d;
	delete g;

	return 0;
}
