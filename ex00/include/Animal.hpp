/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:34:14 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:10:07 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal	&operator=(Animal const &other);

	virtual void	makeSound()const;
	std::string		getType()const;
};

#endif