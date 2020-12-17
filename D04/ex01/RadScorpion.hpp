/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:09:48 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/15 10:36:14 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion(void);
    RadScorpion(RadScorpion const & rhs);
    RadScorpion const & operator=(RadScorpion const & rhs);
    virtual ~RadScorpion(void);

};

#endif