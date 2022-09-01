/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:09:47 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/31 18:55:55 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(std::string name, int gradeTosign, int gradeToexecute);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &					operator=( AForm const & rhs );
		const std::string &		getName() const;
		const bool &			getSign() const;
		const int &				getGradeTosign() const;
		const int &				getGradeToexecute() const;
		void					beSigned(Bureaucrat &brc);
		virtual void			execute(Bureaucrat const & executor) const = 0;
		void					checkRequirements(Bureaucrat const & executor) const;

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

		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string		_name;
		bool					_sign;
		const int				_grade_to_sign;
		const int				_grade_to_execute;

};


#endif /* ************************************************************ FORM_H */
