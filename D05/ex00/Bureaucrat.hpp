/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 15:10:08 by liz           #+#    #+#                 */
/*   Updated: 2021/01/12 13:13:29 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat const & operator=(Bureaucrat const & rhs);
	~Bureaucrat(void);

	std::string getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(void);
	void		decrementGrade(void);

	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Grade is too high");
		}	
	};
	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Grade is too low");
		}
	};
};

std::ostream const & operator<<(std::ostream & stream, Bureaucrat const & rhs);

#endif
