#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & rhs)
{
	std::cout << "* teleports from space *" << std::endl;
	(void)rhs;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	(void)rhs;
	return (*this);
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return ;
}

ISpaceMarine* AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean purify it" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}