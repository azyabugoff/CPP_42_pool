/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:20:57 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/28 18:41:05 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;
class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator = (const Bureaucrat &obj);
	~Bureaucrat();

	int getGrade() const;
	const std::string &getName() const;
	void increment();
	void decrement();
	void signForm(Form &obj);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj);

#endif
