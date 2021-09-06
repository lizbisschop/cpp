/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 13:01:15 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 11:09:42 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
public:
	virtual ~Base(void) { return ;}
};

class A : public Base {
	
};

class B : public Base {

};

class C : public Base {
	
};

Base * generate(void)
{
	int type = rand() % 3;
	std::cout << "Generating type: ";
	switch (type)
	{
		case 0:
		{
			std::cout << "A" << std::endl;
			return (new A);
		}
		case 1:
		{
			std::cout << "B" << std::endl;
			return (new B);
		}
		case 2:
		{
			std::cout << "C" << std::endl;
			return (new C);	
		}
	}
	return (0);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "type doesn't excist" << std::endl; 
}

void	identify_from_reference(Base & p)
{	
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "type doesn't excist" << std::endl; 
}

int		main(void)
{
	srand(time(NULL));
	Base *base1 = generate();
	Base &ref = *base1;
	Base empty;
	identify_from_pointer(&empty);
	std::cout << "Identify from pointer: ";
	identify_from_pointer(base1);
	std::cout << "Identify from reference: ";
	identify_from_reference(ref);
	delete base1;

	return (0);	
}