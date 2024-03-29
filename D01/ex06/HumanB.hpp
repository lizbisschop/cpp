/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 15:34:16 by liz           #+#    #+#                 */
/*   Updated: 2020/12/06 11:43:48 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string);
	~HumanB(void);
	void setWeapon(Weapon & weapon);
	void attack(void);
private:
	std::string	_name;
	Weapon *_weapon;
};

#endif
