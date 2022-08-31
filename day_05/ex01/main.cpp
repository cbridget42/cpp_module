/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:22:20 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 16:45:12 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat *a, *b;
	Form *c, *d;
	try
	{
		a = new Bureaucrat("a", 15);
		b = new Bureaucrat("b", 150);
		c = new Form("c", 15, 150);
		d = new Form("d", 300, 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *c << '\n';
	b->signForm(*c);
	a->signForm(*c);
	std::cout << *c << '\n';
	delete a;
	delete b;
	delete c;
	return 0;
}
