/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:48:18 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 17:18:07 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {
public:
  Victim(std::string n);
  Victim(void);
  Victim(Victim const & rhs);
  Victim const & operator=(Victim const & rhs);
  ~Victim(void);
    void    setName(std::string name);
    std::string getName(void) const;
    std::string getTitle(void) const;
    void    getPolymorphed() const;
private:
    std::string _name;
};

std::ostream & operator<<(std::ostream &stream, Victim & rhs);


#endif