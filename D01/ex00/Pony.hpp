/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 15:06:55 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/07/31 13:00:48 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class pony {
public:
	pony(void);
	~pony(void);
    void    setName(std::string);
    void    setHairColor(std::string);
    void    setEyeColor(std::string);
    void    setAge(std::string);
    void    setHeight(std::string);
    std::string getName(void);
    std::string getHairColor(void);
    std::string getEyeColor(void);
    std::string getAge(void);
    std::string getHeight(void);


private:
    std::string _name;
    std::string _hairColor;
    std::string _eyeColor;
    std::string _age;
    std::string _height;
};

#endif