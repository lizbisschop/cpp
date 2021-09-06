/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 12:26:19 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 17:41:21 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome {

public:

Awesome( int n ) : _n( n ) {}

bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

int	getN(void){ return (_n);}

private:

int _n;
};



int main(void) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}