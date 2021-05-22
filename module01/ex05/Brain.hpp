/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:47:26 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 18:35:41 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string	m_convolutions;
	std::string m_softness;
	std::string m_color;
	std::string m_taste;
	std::string m_freshness;

public:
	Brain();
	~Brain();
	std::string identify();
	
};

#endif