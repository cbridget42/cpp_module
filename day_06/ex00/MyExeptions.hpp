/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyExeptions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:06:24 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/03 21:24:35 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYEXEPTIONS_HPP
# define MYEXEPTIONS_HPP

# include <iostream>
# include <string>

class NotCorectExeption : public std::exception
{

	public:
		virtual const char* what() const throw();


};

class WrongNumbArgExeption : public std::exception
{

	public:
		virtual const char* what() const throw();


};

class OverflowExeption : public std::exception
{

	public:
		virtual const char* what() const throw();


};

#endif /* ***************************************************** MYEXEPTIONS_H */