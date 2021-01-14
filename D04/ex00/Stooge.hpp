/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stooge.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 16:31:19 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/04 18:16:49 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STOOGE_HPP
#define STOOGE_HPP

#include <iostream>
#include "Victim.hpp"

class Stooge : public Victim {
public:
    Stooge(std::string n);
    Stooge(Stooge const & rhs);
    Stooge const & operator=(Stooge const & rhs);
    virtual ~Stooge(void);

	void	getPolymorphed(void) const;
private:
    Stooge(void);
};
std::ostream & operator<<(std::ostream &stream, Stooge & rhs);

#endif