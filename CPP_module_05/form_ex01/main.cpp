/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:09:30 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/10/16 16:40:41 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Form *form1 = new Form("Form1", 10, 20);
  std::cout << *form1 << std::endl;

  try
  {
    std::cout << "Try to create form with grade_to_sign = 0, grade_to_execute = 20" << std::endl;
    Form form2("Form2", 0, 20);
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  try
  {
    std::cout << "Try to create form with grade_to_sign = 10, grade_to_execute = 199" << std::endl;
    Form form3("Form3", 10, 199);
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  Bureaucrat *bur1 = new Bureaucrat("Bur1", 5);
  std::cout << *bur1 << std:: endl;
  bur1->signForm(*form1);
  std::cout << *form1 << std:: endl;
  bur1->signForm(*form1);

  Form* form4 = new Form("Form4", 1, 1);
  Bureaucrat* bur2 = new Bureaucrat("Bur2", 12);
  bur2->signForm(*form4);

  delete form1;
  delete bur1;
  delete form4;
  delete bur2;
	return (0);
}
