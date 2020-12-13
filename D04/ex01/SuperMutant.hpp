/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:03:09 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 18:04:11 by lbisscho      ########   odam.nl         */
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
    ~SuperMutant(void);
};

#endif