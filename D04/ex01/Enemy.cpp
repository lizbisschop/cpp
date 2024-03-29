/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:01:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/20 14:33:10 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
    return ;
}

Enemy::Enemy(void)
{
    return ;
}

Enemy::Enemy(Enemy const & rhs)
{
    *this = rhs;
    return ;
}

Enemy::~Enemy(void)
{
    return ;
}

void			Enemy::setType(std::string type)
{
	this->_type = type;
}

std::string		Enemy::getType(void) const
{
	return (this->_type);
}

int             Enemy::getHP(void) const
{
    return (this->_hp);
}

void            Enemy::setHP(int damage)
{
    this->_hp -= damage;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
    return (*this);
}

void	Enemy::takeDamage(int damage)
{
	if (this->_hp - damage < 0)
		this->_hp = 0;
	else
		this->_hp -= damage;
}