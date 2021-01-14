/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:16:36 by liz           #+#    #+#                 */
/*   Updated: 2020/12/20 13:19:35 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	return ;
}

Cure::Cure(std::string const & type): AMateria("cure")
{
	(void)type;
}

Cure::Cure(Cure const & rhs)
{
	*this = rhs;
	return ;
}

Cure const & Cure::operator=(Cure const & rhs)
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
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	this->setXP(this->getXP() + 10);
}

Cure * Cure::clone(void) const
{
	return (new Cure("cure"));
}