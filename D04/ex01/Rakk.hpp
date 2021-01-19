/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Rakk.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 14:14:54 by liz           #+#    #+#                 */
/*   Updated: 2021/01/06 14:15:27 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAKK_HPP
#define RAKK_HPP

#include <iostream>
#include "Enemy.hpp"

class Rakk : public Enemy {
public:
    Rakk(void);
    Rakk(Rakk const & rhs);
    Rakk const & operator=(Rakk const & rhs);
    virtual ~Rakk(void);

};

#endif