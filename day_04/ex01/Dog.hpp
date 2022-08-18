/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:58:34 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/18 15:56:53 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public AAnimal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &				operator=( Dog const & rhs );
		void				makeSound() const;
		Brain *				getBrain();

		Brain				*_brain;
	private:

};

#endif /* ************************************************************* DOG_H */