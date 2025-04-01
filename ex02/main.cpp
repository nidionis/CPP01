/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidionis <nidionis@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:02:45 by nidionis          #+#    #+#             */
/*   Updated: 2025/03/31 17:03:08 by nidionis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define NB_HORDE 5

/*
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: a pointer to the string.
• stringREF: a reference to the string.
Your program must print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
That’s all—no tricks. The goal of this exercise is to demystify references, which may
seem completely new. Although there are some small differences, this is simply another
syntax for something you already do: address manipulation.
 */

int main(void) {
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "stringPTR :" << stringPTR << std::endl;
    std::cout << "stringREF :" << stringREF << std::endl;

    std::cout << "modifying str" << std::endl;
    str = "an other string";
    std::cout << "stringREF :" << stringREF << std::endl;

    std::cout << "str :" << str << std::endl;
    return 0;
}