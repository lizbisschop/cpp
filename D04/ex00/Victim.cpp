/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:51:18 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 17:19:55 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string n)
{
    setName(n);
    std::cout << "Some random victim called" << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(void)
{
    this->setName("Victoria");
    std::cout << "Some random victim called" << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & rhs)
{
    *this = rhs;
    return ;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

void        Victim::setName(std::string name)
{
    this->_name = name;
    return ;
}

std::string Victim::getName(void) const 
{
    return (this->_name);
}

Victim const & Victim::operator=(Victim const & rhs)
{
    this->setName(rhs.getName());
    return (*this);
}

void        Victim::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl; 
}

std::ostream & operator<<(std::ostream & stream, Victim & rhs)
{
    stream << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return (stream);
}