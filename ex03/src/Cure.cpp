/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:27:07 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/01 17:23:34 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure Default Constructor Called\n";
	return ;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor Called\n";
	return ;
}

Cure::Cure(Cure const &copy): AMateria()
{
	this->_type = copy._type;
	return ;
}

Cure	&Cure::operator=(Cure const &other)
{
	if (this != &other)
	{
		
	}
	return (*this);
}

Cure*	Cure::clone()const
{
	Cure*	new_Cure = new Cure(*this);

	return (new_Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heal's " << target.getName() << " wounds *\n";
	return ;
}
