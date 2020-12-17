/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:57:20 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/15 10:36:10 by liz           ########   odam.nl         */
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
	virtual ~Enemy(void);

	std::string getType(void) const;
	int     getHP(void) const;
	void	setHP(int damage);
	void	setType(std::string type);
	virtual void    takeDamage(int);
private:
	int     _hp;
	std::string _type;
};

#endif