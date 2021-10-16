/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:14:09 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/10/16 16:51:38 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
private:
	const std::string name;
	const int gr_to_sign;
	const int gr_to_exec;
	bool is_signed;
	Form();
public:
	Form(const std::string name, int gr_to_sign, int gr_to_exec);
	Form(const Form &obj);
	Form &operator = (const Form &obj);
	virtual ~Form();

	const std::string &getName() const;
	int getGradeSign() const;
	int getGradeExec() const;
	bool getSign() const;
	void beSigned(const Bureaucrat &obj);

	virtual void execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator << (std::ostream &out, const Form &obj);

#endif
