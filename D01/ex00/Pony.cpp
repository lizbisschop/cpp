/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 15:06:21 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/07/31 13:02:26 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

pony::pony(void)
{
	std::cout << "Constructor was called.\n";
	return ;
}

pony::~pony(void)
{
	std::cout << "Deconstructor was called.\n";
	return ;
}

std::string pony::getName(void)
{
    return (this->_name);
}

std::string pony::getHairColor(void)
{
    return (this->_hairColor);
}

std::string pony::getEyeColor(void)
{
    return (this->_eyeColor);
}

std::string pony::getAge(void)
{
    return (this->_age);
}

std::string pony::getHeight(void)
{
    return (this->_height);
}

void    pony::setName(std::string str)
{
    this->_name = str;
    return ;
}

void    pony::setHairColor(std::string str)
{
    this->_hairColor = str;
    return ;
}

void    pony::setEyeColor(std::string str)
{
    this->_eyeColor = str;
    return ;
}

void    pony::setAge(std::string str)
{
    this->_age = str;
    return ;
}

void    pony::setHeight(std::string str)
{
    this->_height = str;
    return ;
}