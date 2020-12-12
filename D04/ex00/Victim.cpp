/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:51:18 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 17:17:58 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string n): _name(n)
{
    std::cout << "Some random victim called" << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(void)
{
    this->_name = "Victoria";
    std::cout << "Some random victim called" << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim const & Victim::operator=(Victim const & rhs)
{
    this->_name = rhs._name;
    return (*this);
}

std::string Victim::getName(void)
{
    return (this->_name);
}

void        Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl; 
}

std::ostream & operator<<(std::ostream & stream, Victim & rhs)
{
    stream << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return (stream);
}