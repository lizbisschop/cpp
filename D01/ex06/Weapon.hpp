/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 11:39:57 by liz           #+#    #+#                 */
/*   Updated: 2020/11/28 15:19:51 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
public:
	Weapon(std::string);
	~Weapon(void);
	std::string const& getType(void);
	void setType(std::string);
private:
	std::string _type;
};

#endif