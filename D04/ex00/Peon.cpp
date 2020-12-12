/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 17:05:09 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 17:20:03 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string n): _name(n)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(void)
{
    this->_name = "Peondolo";
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Blueark" << std::endl;
}

Peon const & Peon::operator=(Peon const & rhs)
{
    this->_name = rhs._name;
    return (*this);
}

std::string Peon::getName(void)
{
    return (this->_name);
}

void        Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl; 
}

std::ostream & operator<<(std::ostream & stream, Peon & rhs)
{
    stream << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return (stream);
}