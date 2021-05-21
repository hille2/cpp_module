/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:30:56 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 15:28:32 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{}

Human::~Human()
{}

std::string Human::identify()
{
	return(brains.identify());
}

Brain &Human::getBrain()
{
	return(brains);
}
