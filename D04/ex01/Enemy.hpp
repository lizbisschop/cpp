/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:57:20 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 18:00:42 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
public:
    Enemy(int hp, std::string const & type);
    Enemy(void);
    Enemy(Enemy const & rhs);
    Enemy const & operator=(Enemy const & rhs);
    ~Enemy(void);

    std::string getType() const;
    int     getHP() const;
    virtual void    takeDamage(int);
private:
    int     _hp;
    std::string _type;
};

#endif