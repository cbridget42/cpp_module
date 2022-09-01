/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:16:49 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 13:32:36 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), \
			_target("def")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), \
			_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : \
			AForm("Robotomy Request", 72, 45), \
			_target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	this->checkRequirements(executor);
	std::cout << "drilling noises!!! drilling noises!!!\n";
	srand(time(0));
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully!\n";
	else
		std::cout << "robotomy failed!\n";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */