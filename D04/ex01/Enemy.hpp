/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:57:20 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/08 17:08:36 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
private:
	int     _hp;
	std::string _type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(void);
	Enemy(Enemy const & rhs);
	Enemy & operator=(Enemy const & rhs);
	virtual ~Enemy(void);

	std::string getType(void) const;
	void	setType(std::string type);
	int     getHP(void) const;
	void	setHP(int);
	virtual void    takeDamage(int);
};

#endif