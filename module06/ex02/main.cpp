/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/19 18:30:19 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <unistd.h>

Base *generate(void)
{
	int base = rand() % 3;
	if ( base == 0 )
		return new A;
	if ( base == 1 )
		return new B;
	return new C;
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "this is A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "this is B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "this is C" << std::endl;
	else
	{
		std::cout << "error!" << std::endl;
		exit(1);
	}
}

void identify_from_reference( Base & p)
{
	identify_from_pointer(&p);
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	identify_from_pointer(generate());
	usleep(250);
	identify_from_reference(*generate());
}