/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 14:02:55 by liz           #+#    #+#                 */
/*   Updated: 2020/12/21 15:00:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::Ice(std::string const & type): AMateria("ice")
{
	(void)type;
	return ;
}

Ice::Ice(Ice const & rhs)
{
	*this = rhs;
	return ;
}

Ice const & Ice::operator=(Ice const & rhs)
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
	std::cout << "* shoots an ice bolt at *" << target.getName() << std::endl;
	this->setXP(this->getXP() + 10);
}

Ice	* Ice::clone(void) const
{
	return (new Ice("ice"));
}
