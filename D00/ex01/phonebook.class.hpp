/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 13:19:03 by liz           #+#    #+#                 */
/*   Updated: 2020/07/29 11:53:56 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>


class phonebook {
public:
    phonebook(void);
    ~phonebook(void);
    void            setFirstName(std::string);
    void            setLastName(std::string);
    void            setNickname(std::string);
    void            setLogin(std::string);
    void            setPostalAddress(std::string);
    void            setEmailAddress(std::string);
    void            setPhoneNumber(std::string);
    void            setBirthdayDate(std::string);
    void            setFavoriteMeal(std::string);
    void            setUnderwearColor(std::string);
    void            setDarkestSecret(std::string);
    std::string     getFirstName(void);
    std::string     getLastName(void);
    std::string     getNickname(void);
    std::string     getLogin(void);
    std::string     getPostalAddress(void);
    std::string     getEmailAddress(void);
    std::string     getPhoneNumber(void);
    std::string     getBirthdayDate(void);
    std::string     getFavoriteMeal(void);
    std::string     getUnderWearColor(void);
    std::string     getDarkestSecret(void);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;
};

#endif