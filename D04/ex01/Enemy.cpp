/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:01:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 18:02:13 by lbisscho      ########   odam.nl         */
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

Enemy const & Enemy::operator=(Enemy const & rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}
