/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 13:35:09 by liz           #+#    #+#                 */
/*   Updated: 2020/12/21 14:59:52 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type(""), _XP(0)
{
	return ;
}

AMateria::AMateria(std::string const & type): _type(type), _XP(0)
{
	return ;
}

AMateria::AMateria(AMateria const & rhs)
{
	*this = rhs;
	return ;
}

AMateria const & AMateria::operator=(AMateria const & rhs)
{
	this->setXP(rhs.getXP());
	this->setType(rhs.getType());
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const & AMateria::getType(void) const
{
	return(this->_type);
}

void			AMateria::setType(std::string type)
{
	this->_type = type;
}

unsigned int	AMateria::getXP(void) const
{
	return (this->_XP);
}

void			AMateria::setXP(unsigned int XP)
{
	this->_XP = XP;
}

void			AMateria::use(ICharacter& target)
{
	(void)target;
	this->setXP(this->getXP() + 10);
}

