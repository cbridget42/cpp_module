/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:03:06 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 13:24:54 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data {
	int data;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main() {

	Data d;
	d.data = 42;

	std::cout << "before convert: " << d.data << '\n';

	std::cout << "after convert: " << deserialize(serialize(&d))->data << '\n';

	std::cout << "                         &d=" << &d << \
	"\nreturn value of deserialize=" << deserialize(serialize(&d)) << '\n';

	return 0;
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
