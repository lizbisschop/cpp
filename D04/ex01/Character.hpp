/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 10:47:10 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 12:08:31 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {
public:
    Character(void);
    Character(std::string const & name);
    Characer(Character const & rhs);
    Character const & operator=(Character const & rhs);
    ~Character(void);

    void    recoverAP();
    void    equip(AWeapon*);
    void    attack(Enemy*);
    std::string getName(void) const;
private:
    std::string _name;
    int         _AP;
    AWeapon     *_weapon;
};

#endif