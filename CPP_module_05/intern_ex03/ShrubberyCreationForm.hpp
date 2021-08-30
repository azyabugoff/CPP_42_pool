/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:23:05 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/29 23:23:12 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "Form.hpp"

class ShrubberyCreationForm;

class ShrubberyCreationForm : virtual public Form
{
private:
	ShrubberyCreationForm();
	std::string target;
public:
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	const std::string &getTarget() const;
	void execute(Bureaucrat const & executor) const;

	class WorkWithFileException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
