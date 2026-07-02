/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:40:08 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/01 15:21:32 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia Default Constructor called\n";
	return ;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "Materia Constructor for " << type << "called\n";
	return ;
}

AMateria::AMateria(AMateria const &copy)
{
	this->_type = copy._type;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "Materia Destructor called\n";
	return ;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

AMateria	&AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		
	}
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Default attack on " << target.getName() << std::endl;
	return ;
}
