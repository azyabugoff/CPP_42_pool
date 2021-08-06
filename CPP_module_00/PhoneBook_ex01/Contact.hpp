/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 00:50:33 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/05 01:11:23 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int         n_empty = 0;
public:
    int         field_width = 10;
    int         n_fields = 0;
    Contact();
    int         fill_contact(int new_cont_flag = 1);
    void        print_contact(int ind) const;
    void        print_contact_info() const;
    ~Contact() = default;
};

#endif