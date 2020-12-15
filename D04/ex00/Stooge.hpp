/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stooge.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 16:31:19 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 10:38:17 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STOOGE_HPP
#define STOOGE_HPP

#include <iostream>
#include "Victim.hpp"

class Stooge : public Victim {
public:
    Stooge(std::string n);
    Stooge(void);
    Stooge(Stooge const & rhs);
    Stooge const & operator=(Stooge const & rhs);
    virtual ~Stooge(void);
};
std::ostream & operator<<(std::ostream &stream, Stooge & rhs);

#endif