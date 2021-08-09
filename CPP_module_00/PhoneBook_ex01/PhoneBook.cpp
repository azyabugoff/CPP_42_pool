/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:24:08 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/09 10:01:12 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    n_filled_contacts = 0;
    cmd = 0;
};

PhoneBook::~PhoneBook(){};

int PhoneBook::add()
{
    if (n_filled_contacts < N_CONTACTS)
    {
        if (!contacts[n_filled_contacts].fill_contact())
            return (0);
        ++n_filled_contacts;
    }
    else
    {
        for (int i = 0; i < N_CONTACTS - 1; ++i)
            contacts[i] = contacts[i + 1];
        if (!contacts[N_CONTACTS - 1].fill_contact())
            return (0);
    }
    return (1);
}

int PhoneBook::search()
{
    int         wdth = contacts[0].field_width;
    std::string str_cont_ind_to_print = "";
    int         cont_ind_to_print = 0;

    std::cout << "|";
    std::cout << std::setw(wdth) << "IND" << "|";
    std::cout << std::setw(wdth) << "FIR. NAME" << "|";
    std::cout << std::setw(wdth) << "LAST NAME" << "|";
    std::cout << std::setw(wdth) << "NICKNAME" << "|" << std::endl;

    if (!n_filled_contacts)
    {
        std::cout << "EMPTY PHONEBOOK." << std::endl << std::endl;
        return (1);
    }
    for (int i = 0; i < contacts[n_filled_contacts - 1].n_fields - 1; ++i)
        std::cout << "----------";
    for (int i = 0; i < contacts[n_filled_contacts - 1].n_fields; ++i)
        std::cout << "-";
    std::cout << std::endl;

    for (int i = n_filled_contacts - 1; i >= 0; --i)
        contacts[i].print_contact(n_filled_contacts - i - 1);

    for (int i = 0; i < contacts[n_filled_contacts - 1].n_fields - 1; ++i)
        std::cout << "----------";
    for (int i = 0; i < contacts[n_filled_contacts - 1].n_fields; ++i)
        std::cout << "-";
    std::cout << std::endl;

    std::cout << "ENTER INDEX OF THE CONTACT:" << std::endl;
    std::getline(std::cin, str_cont_ind_to_print);
    if (std::cin.eof())
    {
        std::cout << std::endl << "INPUT WAS INTERRUPTED. PROGRAM STOPPED EXECUTION." << std::endl << std::endl;
        return (0);
    }
    else if (str_cont_ind_to_print.length() != 1 || str_cont_ind_to_print[0] < '1' || str_cont_ind_to_print[0] > n_filled_contacts + '0')
    {
        std::cout << std::endl << "WRONG INPUT. INDEX IS A NUMBER FROM 1 TO 8. PLEASE, TRY AGAIN..." << std::endl;
        return (search());
    }
    else
    {
        cont_ind_to_print = str_cont_ind_to_print[0] - '0';
        contacts[n_filled_contacts - cont_ind_to_print].print_contact_info();
    }
    return (1);
}

int PhoneBook::get_user_cmd()
{
    std::string cmd_str;

    std::cout << "ENTER PHONEBOOK COMMAND (\"ADD\", \"SARCH\" or \"EXIT\"):" << std::endl;
    std::getline(std::cin, cmd_str);
    if (cmd_str == "EXIT")
    {
        std::cout << std::endl << "USER ENTERED EXIT COMMAND. PROGRAM STOPPED EXECUTION." << std::endl << std::endl;
        return (0);
    }
    else if (cmd_str == "ADD")
        cmd = ADD_CMD;
    else if (cmd_str == "SEARCH")
        cmd = SEARCH_CMD;
    else if (std::cin.eof())
    {
        std::cout << std::endl << "INPUT WAS INTERRUPTED. PROGRAM STOPPED EXECUTION." << std::endl << std::endl;
        return (0);
    }
    else
    {
        std::cout << "WRONG COMMAND. PLEASE, TRY AGAIN..." << std::endl;
        return (get_user_cmd());
    }
    return (1);
}

int PhoneBook::exec_user_cmd()
{
    if (cmd == ADD_CMD)
    {
        if (!add())
            return (0);
    }
    else if (cmd == SEARCH_CMD)
    {
        if (!search())
            return (0);
    }
    return (1);
}

int main(void)
{
    PhoneBook phonebook;

    while (1)
    {
        if (!phonebook.get_user_cmd())
            return (0);
        if (!phonebook.exec_user_cmd())
            return (0);
    }
    return (0);
}
