/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:27:16 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/01 15:31:33 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	private:
		
	public:
		Cure();
		~Cure();
		Cure(Cure const &copy_);
		Cure	&operator=(Cure const &other);

		Cure*	clone()const;
		void	use(ICharacter& target);
};

#endif