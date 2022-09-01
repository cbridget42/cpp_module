/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:44:14 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/01 16:58:11 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern;

typedef AForm *(*fcn)(std::string);

typedef struct s_form
{
	std::string			name;
	fcn					function;
} t_form;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm*			makeForm(std::string name, std::string target);

	private:
		t_form					forms[3];
		static AForm*			ppForm(std::string target);
		static AForm*			rrForm(std::string target);
		static AForm*			scForm(std::string target);
};


#endif /* ********************************************************** INTERN_H */