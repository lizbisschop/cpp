/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 10:47:10 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/06 11:13:42 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {
private:
    std::string _name;
    int         _AP;
    AWeapon     *_weapon;
public:
    Character(void);
    Character(std::string const & name);
    Character(Character const & rhs);
    Character const & operator=(Character const & rhs);
    ~Character(void);

	std::string 	getName(void) const;
	int				getAP(void) const;
	AWeapon	*		getWeapon(void) const;

    void    recoverAP();
    void    equip(AWeapon*);
    void    attack(Enemy*);
};

std::ostream const & operator<<(std::ostream & stream, Character const & rhs);

#endif