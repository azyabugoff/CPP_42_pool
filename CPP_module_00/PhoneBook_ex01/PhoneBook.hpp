/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 00:49:34 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/04 22:46:48 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define N_CONTACTS 8

# define ADD_CMD 1
# define SEARCH_CMD 2

# include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[N_CONTACTS];
    int     n_filled_contacts = 0;
    int     cmd = 0;
    int     add();
    int     search();
public:
    PhoneBook();
    int     get_user_cmd();
    int     exec_user_cmd();
    ~PhoneBook() = default;
};

#endif
