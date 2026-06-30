/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 11:20:33 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/30 12:50:13 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
	return ;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = copy;
	return ;
}

Brain	&Brain::operator=(Brain const &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}	
