/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:40:15 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/18 16:07:50 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "AAnimal.hpp"
# include <iostream>
# include <string>

class Cat : public AAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &				operator=( Cat const & rhs );
		void				makeSound() const;
		Brain *				getBrain();

	private:
		Brain				*_brain;

};

#endif /* ************************************************************* CAT_H */