/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:16:36 by liz           #+#    #+#                 */
/*   Updated: 2021/02/10 13:48:02 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const & rhs)
{
	*this = rhs;
	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	(void)rhs;
	return (*this);
}

Cure::~Cure(void)
{
	return ;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds * " << std::endl;
	AMateria::use(target);
}

Cure * Cure::clone(void) const
{
	return (new Cure(*this));
}