/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Nokia.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 12:53:48 by liz           #+#    #+#                 */
/*   Updated: 2021/01/06 12:54:32 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOKIA_HPP
#define NOKIA_HPP

#include <iostream>
#include "AWeapon.hpp"

class Nokia : public AWeapon {
public:
    Nokia(void);
    Nokia(Nokia const & rhs);
    Nokia const & operator=(Nokia const & rhs);
    virtual ~Nokia(void);

	void	attack(void) const;
};

#endif