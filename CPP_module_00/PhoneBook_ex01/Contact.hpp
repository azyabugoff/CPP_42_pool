/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 00:50:33 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/09 09:43:35 by sesnowbi         ###   ########.fr       */
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
    int         n_empty;
public:
    int         field_width;
    int         n_fields;
    Contact();
    int         fill_contact(int new_cont_flag = 1);
    void        print_contact(int ind) const;
    void        print_contact_info() const;
    ~Contact();
};

#endif
