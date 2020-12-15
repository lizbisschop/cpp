/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:01:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 12:04:55 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
    return ;
}

Enemy::Enemy(void)
{
    return ;
}

Enemy(Enemy const & rhs)
{
    *this = rhs;
    return ;
}

Enemy::~Enemy(void)
{
    return ;
}

std::string     Enemy::getType(void) const
{
    return (this->_type);
}

int             Enemy:::getHP(void) const
{
    return (this->_hp);
}

void            Enemy::setHP(int damage)
{
    this->_hp -= damage;
}

Enemy const & Enemy::operator=(Enemy const & rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}
