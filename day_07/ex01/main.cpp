/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:41:46 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/13 19:16:22 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

/*void test1(int x) {
	std::cout << "test1 x=" << x << std::endl;
}

void test2(std::string x) {
	std::cout << "test2 x=" << x << std::endl;
}

template<typename T>
void test3(T x) {
	std::cout << "test3 x=" << x << std::endl;
}

int main() {
	int arr1[3] = {1, 3, 5};
	std::string arr2[3] = {"str1", "str2", "str3"};
	double arr3[3] = {1.5, 3.5, 5.5};

	::iter(arr1, 3, test1);
	std::cout << '\n';

	::iter(arr2, 3, test2);
	std::cout << '\n';

	::iter(arr3, 3, test3);
	std::cout << '\n';

	return 0;
}*/

class Awesome {
	public:
		Awesome(void): _n(42) {return;}
		int get(void) const {return this->_n;}
	private:
		int _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs){
	o<<rhs.get();
	return o;
}

template<typename T>
void print(T const &x) {
	std::cout<<x<<std::endl;
	return;
}

int main() {
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
}
