/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 17:05:33 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 16:46:53 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{
public:
  Peon(std::string n);
  Peon(void);
  Peon(Peon const & rhs);
  Peon const & operator=(Peon const & rhs);
  ~Peon(void);
};

std::ostream & operator<<(std::ostream &stream, Peon & rhs);


#endif