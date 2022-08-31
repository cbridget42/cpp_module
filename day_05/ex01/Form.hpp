/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:09:47 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 16:34:56 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, int gradeTosign, int gradeToexecute);
		Form( Form const & src );
		~Form();

		Form &					operator=( Form const & rhs );
		const std::string &		getName() const;
		const bool &			getSign() const;
		const int &				getGradeTosign() const;
		const int &				getGradeToexecute() const;
		void					beSigned(Bureaucrat &brc);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Form exception: grade is too high!!!";
				};
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Form exception: grade is too low!!!";
				};
		};

	private:
		const std::string		_name;
		bool					_sign;
		const int				_grade_to_sign;
		const int				_grade_to_execute;

};

std::ostream &					operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */