/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 17:05:09 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 17:58:04 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string n): Victim(n)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & rhs): Victim(rhs)
{
    std::cout << "Zog zog." << std::endl;
    return ;
}

Peon::~Peon(void)
{
    std::cout << "Blueark..." << std::endl;
}

Peon const & Peon::operator=(Peon const & rhs)
{
    this->Victim::setName(rhs.getName());
    return (*this);
}

void		Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator<<(std::ostream & stream, Peon & rhs)
{
    stream << "I'm " << rhs.Victim::getName() << " and I like otters!" << std::endl;
    return (stream);
}