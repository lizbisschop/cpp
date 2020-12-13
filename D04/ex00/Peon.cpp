/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 17:05:09 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 17:18:49 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string n)
{
    this->Victim::setName(n);
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(void)
{
    this->Victim::setName("Peondolo");
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & rhs)
{
    *this = rhs;
    return ;
}

Peon::~Peon(void)
{
    std::cout << "Blueark" << std::endl;
}

Peon const & Peon::operator=(Peon const & rhs)
{
    this->Victim::setName(rhs.getName());
    return (*this);
}

std::ostream & operator<<(std::ostream & stream, Peon & rhs)
{
    stream << "I'm " << rhs.Victim::getName() << " and I like otters!" << std::endl;
    return (stream);
}