/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:31:45 by cbridget          #+#    #+#             */
/*   Updated: 2022/09/10 14:37:32 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
//# include <execution>

class Base
{

	public:

		virtual ~Base();

};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif /* ************************************************************ BASE_H */