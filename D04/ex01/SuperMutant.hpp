/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:03:09 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/06 11:23:04 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
    SuperMutant(void);
    SuperMutant(SuperMutant const & rhs);
    SuperMutant const & operator=(SuperMutant const & rhs);
    virtual ~SuperMutant(void);

	void takeDamage(int);
};

#endif