/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 17:05:33 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 17:21:48 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>

class Peon {
public:
  Peon(std::string n);
  Peon(void);
  Peon const & operator=(Peon const & rhs);
  ~Peon(void);

    std::string getName(void);
    std::string getTitle(void);
    void    getPolymorphed() const;
private:
    std::string _name;
};

std::ostream & operator<<(std::ostream &stream, Peon& rhs);


#endif