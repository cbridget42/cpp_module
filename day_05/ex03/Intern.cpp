/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:44:19 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 16:56:12 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	forms[0].name = "presidential pardon";
	forms[0].function = ppForm;
	forms[1].name = "robotomy request";
	forms[1].function = rrForm;
	forms[2].name = "shrubbery creation";
	forms[2].function = scForm;
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm* Intern::makeForm(std::string name, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (name == forms[i].name){
			std::cout << "Intern creates " << name << '\n';
			return forms[i].function(target);
		}
	}
	std::cout << "Intern can't create " << name << '\n';
	return 0;
}

AForm* Intern::ppForm(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::rrForm(std::string target) {
	return new RobotomyRequestForm(target);
}

AForm* Intern::scForm(std::string target) {
	return new ShrubberyCreationForm(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */