/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 12:43:30 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/01 17:36:12 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice Default Constructor Called\n";
	return ;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor Called\n";
	return ;
}

Ice::Ice(Ice const &copy): AMateria()
{
	this->_type = copy._type;
	return ;
}

Ice	&Ice::operator=(Ice const &other)
{
	if (this != &other)
	{
		
	}
	return (*this);
}

Ice*	Ice::clone()const
{
	Ice*	new_ice = new Ice(*this);

	return (new_ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	return ;
}
