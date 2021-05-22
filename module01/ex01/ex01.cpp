/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:32:31 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 15:09:29 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	{
		std::string *panther = new std::string("String panther");
		std::cout << *panther << std::endl;
		delete panther;
	}
	{
		std::string panther = std::string("String panther");
		std::cout << panther << std::endl;
	}
}

int main()
{
	memoryLeak();
	while (1) ;
	return (0);
}