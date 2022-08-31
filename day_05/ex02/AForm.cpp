/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:09:54 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 18:56:03 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _name("def"), _sign(false), _grade_to_sign(150), _grade_to_execute(150)
{
}

AForm::AForm(std::string name, int gradeTosign, int gradeToexecute) : _name(name), \
			_sign(false), _grade_to_sign(gradeTosign), _grade_to_execute(gradeToexecute)
{
	if (gradeTosign < 1 || gradeToexecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeTosign > 150 || gradeToexecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm & src ) : _name(src.getName()), \
			_sign(src.getSign()), \
			_grade_to_sign(src.getGradeTosign()), \
			_grade_to_execute(src.getGradeToexecute())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_sign = rhs.getSign();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << i.getName() << ", Form grade to sign " << i.getGradeTosign() \
	<< ", Form grade to execute " << i.getGradeToexecute() \
	<< ", Form signed: " << i.getSign() << ".";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* AForm::GradeTooHighException::what() const throw() {
	return "Form exception: grade is too high!!!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Form exception: grade is too low!!!";
}

const char* AForm::NotSignedException::what() const throw() {
	return "Form exception: form not signed!!!";
}

void AForm::beSigned(Bureaucrat & brc) {
	if (this->getGradeTosign() < brc.getGrade())
		throw AForm::GradeTooLowException();
	_sign = true;
}

void AForm::checkRequirements(Bureaucrat const & executor) const {
	if (!this->getSign())
		throw AForm::NotSignedException();
	else if (this->getGradeToexecute() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string & AForm::getName() const {
	return _name;
}

const bool & AForm::getSign() const {
	return _sign;
}

const int & AForm::getGradeTosign() const {
	return _grade_to_sign;
}

const int & AForm::getGradeToexecute() const {
	return _grade_to_execute;
}


/* ************************************************************************** */
