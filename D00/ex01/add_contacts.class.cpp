/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_contacts.class.cpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:41:43 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/07/28 16:54:52 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>

phonebook::phonebook(void)
{
    return ;
} 

phonebook::~phonebook(void)
{
        return ;
}

std::string phonebook::getFirstName(void)
{
    return (this->_firstName);
}

std::string phonebook::getLastName(void)
{
    return (this->_lastName);
}

std::string phonebook::getNickname(void)
{
    return (this->_nickname);
}

std::string phonebook::getLogin(void)
{
    return (this->_login);
}

std::string phonebook::getPostalAddress(void)
{
    return (this->_postalAddress);
}

std::string phonebook::getEmailAddress(void)
{
    return (this->_emailAddress);
}

std::string phonebook::getPhoneNumber(void)
{
    return (this->_phoneNumber);
}

std::string phonebook::getBirthdayDate(void)
{
    return (this->_birthdayDate);
}

std::string phonebook::getFavoriteMeal(void)
{
    return (this->_favoriteMeal);
}

std::string phonebook::getUnderWearColor(void)
{
    return (this->_underwearColor);
}

std::string phonebook::getDarkestSecret(void)
{
    return (this->_darkestSecret);
}

void        phonebook::setFirstName(std::string str)
{
    this->_firstName = str;
    return ;
}

void        phonebook::setLastName(std::string str)
{
    this->_lastName = str;
    return ;
}

void        phonebook::setNickname(std::string str)
{
    this->_nickname = str;
    return ;
}

void        phonebook::setLogin(std::string str)
{
    this->_login = str;
    return ;
}

void        phonebook::setPostalAddress(std::string str)
{
    this->_postalAddress = str;
    return ;
}

void        phonebook::setEmailAddress(std::string str)
{
    this->_emailAddress = str;
    return ;
}

void        phonebook::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
    return ;
}

void        phonebook::setBirthdayDate(std::string str)
{
    this->_birthdayDate = str;
    return ;
}

void        phonebook::setFavoriteMeal(std::string str)
{
    this->_favoriteMeal = str;
    return ;
}

void        phonebook::setUnderwearColor(std::string str)
{
    this->_underwearColor = str;
    return ;
}

void        phonebook::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
    return ;
}
