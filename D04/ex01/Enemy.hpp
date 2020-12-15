/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:57:20 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 12:03:49 by lbisscho      ########   odam.nl         */
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
	virtul ~Enemy(void);

	std::string getType(void) const;
	int     getHP(void) const;
	void	setHP(int damage);
	virtual void    takeDamage(int);
private:
	int     _hp;
	std::string _type;
};

#endif