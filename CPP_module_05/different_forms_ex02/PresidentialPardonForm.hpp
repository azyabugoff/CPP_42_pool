/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:20:44 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/29 22:21:31 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : virtual public Form
{
private:
	PresidentialPardonForm();
	std::string target;
public:
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	PresidentialPardonForm &operator = (const PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	const std::string &getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif
