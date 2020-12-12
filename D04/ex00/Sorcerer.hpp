/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 16:23:46 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 17:23:03 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERE_HPP
#define SORCERE_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string n, std::string t);
    Sorcerer(void);
    Sorcerer const & operator=(Sorcerer const & rhs);
    ~Sorcerer(void);

    std::string getName(void);
    std::string getTitle(void);
    void    polymorph(Victim const &) const;
private:
    std::string _name;
    std::string _title;
};

std::ostream & operator<<(std::ostream &stream, Sorcerer & rhs);

#endif