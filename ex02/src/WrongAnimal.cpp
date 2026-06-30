/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:16:00 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:48:36 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "This WrongAnimal doesn't make any sound !" << std::endl;
	return ; 
}

std::string	WrongAnimal::getType()const
{
	return (this->type);
}