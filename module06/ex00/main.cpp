/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/18 16:52:09 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
	if ( ac > 2)
	{
		std::cout << "Error:" << std::endl << "No arguments" << std::endl;
		return 1;
	}
	for (int i = 1; i <= ac; i++)
	{
		Conversion value(static_cast<std::string>(av[i]));
		try
		{
			value.checkScalar();
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}