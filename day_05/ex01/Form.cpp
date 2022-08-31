/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:09:54 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 16:44:27 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("def"), _sign(false), _grade_to_sign(150), _grade_to_execute(150)
{
}

Form::Form(std::string name, int gradeTosign, int gradeToexecute) : _name(name), \
			_sign(false), _grade_to_sign(gradeTosign), _grade_to_execute(gradeToexecute)
{
	if (gradeTosign < 1 || gradeToexecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeTosign > 150 || gradeToexecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src ) : _name(src.getName()), \
			_sign(src.getSign()), \
			_grade_to_sign(src.getGradeTosign()), \
			_grade_to_execute(src.getGradeToexecute())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_sign = rhs.getSign();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", Form grade to sign " << i.getGradeTosign() \
	<< ", Form grade to execute " << i.getGradeToexecute() \
	<< ", Form signed: " << i.getSign() << ".";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat & brc) {
	if (this->getGradeTosign() < brc.getGrade())
		throw Form::GradeTooLowException();
	_sign = true;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string & Form::getName() const {
	return _name;
}

const bool & Form::getSign() const {
	return _sign;
}

const int & Form::getGradeTosign() const {
	return _grade_to_sign;
}

const int & Form::getGradeToexecute() const {
	return _grade_to_execute;
}


/* ************************************************************************** */