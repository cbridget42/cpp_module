/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyExeptions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:06:24 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/02 18:11:28 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYEXEPTIONS_HPP
# define MYEXEPTIONS_HPP

# include <iostream>
# include <string>

class NotPrintableExeption : public std::exception
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