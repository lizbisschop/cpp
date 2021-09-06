/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 11:34:29 by liz           #+#    #+#                 */
/*   Updated: 2020/12/05 17:56:43 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
public:
	Brain(void);
	~Brain(void);
	std::string identify(void) const;
	void	setAddress(void);

private:
	std::string _address;
};

#endif