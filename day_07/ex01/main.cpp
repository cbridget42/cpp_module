/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:41:46 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/14 12:57:37 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void test1(int const &x) {
	std::cout << "test1 x=" << x << std::endl;
}

template<typename T>
void test2(T x) {
	std::cout << "test2 x=" << x << std::endl;
}

class Test3 {
	public:
		Test3(): _t(42) {};
	int _t;
};

std::ostream & operator<<(std::ostream &o, Test3 const &rhs){
	o<<rhs._t;
	return o;
}

int main() {
	int arr1[3] = {1, 3, 5};
	std::string arr2[3] = {"str1", "str2", "str3"};
	Test3 arr3[3];

	iter(arr1, 3, test1);
	std::cout << '\n';

	iter(arr2, 3, test2);
	std::cout << '\n';

	iter(arr3, 3, test2);
	std::cout << '\n';

	return 0;
}
