/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:07:46 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/01 20:13:55 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int in_file_is_valid(std::ifstream &file, std::string str_file)
{
    file.open(str_file);
    if (file.fail())
    {
        std::cout << "File \"" << str_file << "\" open error." << std::endl;
        return (0);
    }
    return (1);
}

int out_file_is_valid(std::ofstream &file, std::string str_file)
{
    std::string path = str_file + ".replace";

    file.open(path);
    if (file.fail())
    {
        std::cout << "File \"" << path << "\" open error." << std::endl;
        return (0);
    }
    return (1);
}

int valid_args(std::ifstream &file, int argc, char **argv)
{
    std::string     s1, s2;

    if (argc != 4)
    {
        std::cout << "Wrong number of arguments." << std::endl;
        return (0);
    }
    s1 = argv[2];
    s2 = argv[3];
    if (!s1.length() || !s2.length())
    {
        std::cout << "The second or the third arguments are empty." << std::endl;
        return (0);
    }
    if (!in_file_is_valid(file, argv[1]))
        return (0);
    return (1);
}

void    replace_substrs(std::string &txt, std::string s1, std::string s2)
{
    int ind = 0;

    while ((ind = txt.find(s1, ind)) >= 0)
    {
        txt.erase(ind, s1.length());
        txt.insert(ind, s2);
        ind += s2.length();
    }
}

int main(int argc, char *argv[])
{
    std::ifstream   file;
    std::ofstream   file2;
    std::string     f_text = "";

    if (!valid_args(file, argc, argv))
        return (1);
    std::string line;
    while (getline(file, line))
        f_text += line + "\n";
    file.close();
    replace_substrs(f_text, argv[2], argv[3]);
    if (!out_file_is_valid(file2, argv[1]))
        return (1);
    file2 << f_text;
    file2.close();
    return (0);
}
