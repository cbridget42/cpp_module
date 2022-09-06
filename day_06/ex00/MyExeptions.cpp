/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyExeptions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:06:34 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/03 21:24:39 by cbridget         ###   ########.fr       */
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

const char* NotCorectExeption::what() const throw() {
	return "error: input is not correct!";
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