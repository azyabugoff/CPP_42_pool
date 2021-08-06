/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:24:08 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/03 19:12:08 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class   Megaphone
{
private:
    std::string shy_str;
public:
    Megaphone(int n_strs, char **arr_strs);
    void    say_loud();
    ~Megaphone() = default;
};

Megaphone::Megaphone(int n_strs, char **arr_strs)
{
    if (n_strs > 0)
    {
        for (int i = 0; i < n_strs; ++i)
            shy_str += arr_strs[i];
    }
    else
        shy_str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

void Megaphone::say_loud()
{
    std::string loud_str = shy_str;
    for (unsigned long i = 0; i < loud_str.length(); ++i)
    {
        if (loud_str[i] >= 'a' && loud_str[i] <= 'z')
            loud_str[i] += 'A' - 'a';
        std::cout << loud_str[i];
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    Megaphone   megaphone(argc - 1, argv + 1);
    megaphone.say_loud();
    return (0);
}
