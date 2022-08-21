/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:30:47 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/19 22:03:47 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name("")
{
	for(int i = 0; i < 4; i++)
		_materias[i] = 0;
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
		_materias[i] = 0;
}

Character::Character( const Character & src ) : _name(src._name)
{
	for (int i = 0; i < 4; i++) {
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
		else
			this->_materias[i] = 0;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++) {
		if (_materias[i])
			delete _materias[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character & Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		for(int i = 0; i < 4; i++) {
			if (_materias[i])
				delete _materias[i];
			if (rhs._materias[i])
				this->_materias[i] = rhs._materias[i]->clone();
			else
				this->_materias[i] = 0;
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_materias[i]) {
			_materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		_materias[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3)
		_materias[idx]->use(target);
}

std::string const & Character::getName() const {
	return _name;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */