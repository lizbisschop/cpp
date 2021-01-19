#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <cstring>

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 72, 45, target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy)
{
	return ;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (&rhs != this)
	{
		Form::operator=(rhs);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != 1)
		throw Form::GradeNotSigned();
	else if (executor.getGrade() >= this->getGradeExecute())
	{
		std::cout << "Can't be executed because: ";
		throw Form::GradeTooLowException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}