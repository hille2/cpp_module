/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:45 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 12:55:54 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>

int main()
{
	long num = 0;

	std::cout << "please enter the number of zombies:" << std::endl;
	std::cin >> num;
	ZombieHorde hord(num);
}