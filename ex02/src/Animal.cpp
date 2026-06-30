/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:34:03 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:02:34 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

AAnimal::AAnimal(): type("Default")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor Called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = copy;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &other)
{
	this->type = other.type;
	return (*this);
}

std::string	AAnimal::getType()const
{
	return (this->type);
}