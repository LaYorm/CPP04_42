/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 10:32:01 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/02 11:43:54 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor Called\n";
	for (size_t i = 0; i < 4; i++)
		this->_book_materia[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called\n";
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_book_materia[i])
			delete this->_book_materia[i];
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (size_t i = 0; i < 4; i++)
		this->_book_materia[i] = NULL;
	*this = copy;
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &other)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (other._book_materia[i])
			this->_book_materia[i] = other._book_materia[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_book_materia[i])
		{
			this->_book_materia[i] = m;
			break;	
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_book_materia[i] && type == this->_book_materia[i]->getType())
			return (this->_book_materia[i]->clone());
	}
	return (0);
}
