/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 01:01:52 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 13:34:26 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::~Contact(){};

int Contact::fill_contact(int new_cont_flag)
{
    n_fields = 0;
    n_empty = 0;
    if (new_cont_flag)
        std::cout << std::endl << "NEW CONTACT" << std::endl;

    std::cout << "Fill in the contact's first name:" << std::endl;
    std::getline(std::cin, first_name);
    if (++n_fields && !first_name.length())
        ++n_empty;

    std::cout << "Fill in the contact's last name:" << std::endl;
    std::getline(std::cin, last_name);
    if (++n_fields && !last_name.length())
        ++n_empty;

    std::cout << "Fill in the contact's nickname:" << std::endl;
    std::getline(std::cin, nickname);
    if (++n_fields && !nickname.length())
        ++n_empty;

    std::cout << "Fill in the contact's phone number:" << std::endl;
    std::getline(std::cin, phone_number);
    ++n_fields;

    std::cout << "Fill in the contact's darkest secret. It honestly will not be revealed:" << std::endl;
    std::getline(std::cin, darkest_secret);
    ++n_fields;
    std::cout << "==========" << std::endl;

    if (n_empty == n_fields - 2)
    {
        n_fields = 0;
        n_empty = 0;
        if (std::cin.eof())
        {
            std::cout << std::endl << "INPUT WAS INTERRUPTED. PROGRAM STOPPED EXECUTION." << std::endl << std::endl;
            return (0);
        }
        std::cout << "PLEASE, FILL IN AT LEAST ONE OF FIRST NAME, LAST NAME AND NICKNAME..." << std::endl;
        return (fill_contact(0));
    }
    return (1);
}

void Contact::print_contact(int ind) const
{
    std::cout << "|" << std::setw(field_width) << ind + 1 << "|";
    if ((int)first_name.length() > field_width)
        std::cout << first_name.substr(0, field_width - 1) << "." << "|";
    else
        std::cout << std::setw(field_width) << first_name << "|";
    if ((int)last_name.length() > field_width)
        std::cout << last_name.substr(0, field_width - 1) << "." << "|";
    else
        std::cout << std::setw(field_width) << last_name << "|";
    if ((int)nickname.length() > field_width)
        std::cout << nickname.substr(0, field_width - 1) << "." << "|";
    else
        std::cout << std::setw(field_width) << nickname << "|" << std::endl;
}

void Contact::print_contact_info() const
{
    std::cout << std::endl << "CONTACT INFORMATION:" << std::endl;
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl << std::endl;
}
