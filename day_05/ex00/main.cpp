/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:22:20 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 14:47:22 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat *a, *b, *c;
	try
	{
		a = new Bureaucrat("a", 15);
		b = new Bureaucrat("b", 150);
		c = new Bureaucrat("c", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		b->decrementGrade();
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *a << '\n';
	a->incrementGrade();
	std::cout << *a << '\n';
	delete a;
	delete b;
	return 0;
}
