/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyExeptions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:06:34 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/02 18:12:05 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyExeptions.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* NotPrintableExeption::what() const throw() {
	return "error: your input is not a displayable character!";
}

const char* WrongNumbArgExeption::what() const throw() {
	return "error: wrong number of argumets!";
}

const char* OverflowExeption::what() const throw() {
	return "error: overflow!";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */