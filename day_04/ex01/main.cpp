/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:46:49 by cbridget          #+#    #+#             */
/*   Updated: 2022/08/18 15:56:53 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"

int main() {

	AAnimal *arr[8];
	for(int i = 0; i < 8; i++) {
		if (i < 4)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	arr[2]->getBrain()->_ideas[5] = "I'm a good boy!\n";
	arr[6]->getBrain()->_ideas[10] = "I'm a cat!\n";

	arr[2]->makeSound();
	std::cout << arr[2]->getBrain()->_ideas[5];
	arr[6]->makeSound();
	std::cout << arr[6]->getBrain()->_ideas[10];

	for(int i = 0; i < 8; i++)
		delete arr[i];

/*	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;*/

	return 0;
}
