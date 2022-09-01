/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:23:25 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 20:17:34 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &			operator=( Bureaucrat const & rhs );
		const std::string &		getName() const;
		const int &				getGrade() const;
		void					incrementGrade();
		void					decrementGrade();
		void					signForm(AForm &form);
		void					executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string		_name;
		int						_grade;

};

std::ostream &					operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */