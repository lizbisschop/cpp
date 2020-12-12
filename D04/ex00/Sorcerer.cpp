/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:25:24 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 17:23:42 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t): _name(n), _title(t)
{
    std::cout << this->_name << ", " << this->_title <<  " is born!" << std::endl;
    return ;
}

Sorcerer::Sorcerer(void)
{
    this->_name = "Magino";
    this->_title = "Novice";
    std::cout << this->_name << ", " << this->_title <<  ", is born!" << std::endl;
    return ;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
    return ;
}

Sorcerer const & Sorcerer::operator=(Sorcerer const & rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    return (*this);
}

std::string Sorcerer::getName(void)
{
    return (this->_name);
}

std::string Sorcerer::getTitle(void)
{
    return (this->_title);
}

void    Sorcerer::polymorph(Victim const & vic) const
{
    return (vic.getPolymorphed());
}

std::ostream & operator<<(std::ostream & stream, Sorcerer & rhs)
{
    stream <<  "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies" << std::endl;
    return (stream);
}