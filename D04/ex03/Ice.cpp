/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:02:55 by liz           #+#    #+#                 */
/*   Updated: 2021/02/15 16:59:59 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const & rhs)
{
	*this = rhs;
	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	(void)rhs;
	return (*this);
}

Ice::~Ice(void)
{
	return ;
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice	* Ice::clone(void) const
{
	return (new Ice(*this));
}
