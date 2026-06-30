/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:16:03 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:50:04 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = copy;
	return ;
}
WrongCat	&WrongCat::operator=(WrongCat const &other)
{
	WrongAnimal::operator=(other);
	return (*this);	
}

void	WrongCat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Miaoouu**" << std::endl;
	return ;
}