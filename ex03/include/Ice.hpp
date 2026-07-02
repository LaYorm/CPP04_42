/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 12:40:24 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/01 15:22:18 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	private:
		
	public:
		Ice();
		~Ice();
		Ice(Ice const &copy);
		Ice	&operator=(Ice const &other);

		Ice*	clone()const;
		void	use(ICharacter& target);
};

#endif