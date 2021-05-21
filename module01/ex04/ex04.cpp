/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:06:34 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 13:24:08 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	findBrain()
{
	std::string brain;
	std::string *pointerBrain;

	brain = "HI THIS IS BRAIN";
	pointerBrain = &brain;
	std::string &referenceBrain = brain;
	std::cout << "<String>" << std::endl;
	std::cout << "string:\t\t" << brain << std::endl;
	std::cout << "poinret:\t" << *pointerBrain << std::endl;
	std::cout << "reference:\t" << referenceBrain << std::endl;
	
	std::cout << "<Memory cell>" << std::endl;
	std::cout << "string:\t\t" << &brain << std::endl;
	std::cout << "poinret:\t" << pointerBrain << std::endl;
	std::cout << "reference:\t" << &referenceBrain << std::endl;
}
	

int main()
{
	findBrain();
	return (0);
}