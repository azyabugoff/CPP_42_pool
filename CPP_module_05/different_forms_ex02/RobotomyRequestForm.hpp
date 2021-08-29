/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:21:50 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/29 22:40:54 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm;

class RobotomyRequestForm : virtual public Form
{
private:
	RobotomyRequestForm();
	std::string target;
public:
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm &operator = (const RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	const std::string &getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif
