/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:39:55 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 13:31:42 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), \
			_target("def")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : \
			AForm("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : \
			AForm("Presidential Pardon", 25, 5), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	this->checkRequirements(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox!\n";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */