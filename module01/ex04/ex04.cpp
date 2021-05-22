/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:06:34 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 15:51:17 by sgath            ###   ########.fr       */
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
	std::cout << "\033[1;31m<String>\033[0m" << std::endl;
	std::cout << "string:\t\t" << brain << std::endl;
	std::cout << "poinret:\t" << *pointerBrain << std::endl;
	std::cout << "reference:\t" << referenceBrain << std::endl;
	
	std::cout << "\033[1;31m<Memory cell>\033[0m" << std::endl;
	std::cout << "string:\t\t" << &brain << std::endl;
	std::cout << "poinret:\t" << pointerBrain << std::endl;
	std::cout << "reference:\t" << &referenceBrain << std::endl;
}
	

int main()
{
	findBrain();
	return (0);
}