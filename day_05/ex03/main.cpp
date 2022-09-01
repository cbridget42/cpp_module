/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:22:20 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 14:38:13 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	Intern stiven;
	AForm *form;

	form = stiven.makeForm("robotomy request", "Bender");
	delete form;
	form = stiven.makeForm("bla bla", "bla");
	return 0;
}
