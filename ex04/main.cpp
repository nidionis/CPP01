/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidionis <nidionis@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:48:54 by nidionis          #+#    #+#             */
/*   Updated: 2025/04/06 19:55:14 by nidionis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string str, std::string s1, std::string s2) {
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
    }
    return str;
}

int main(int argc, const char *argv[]) {
    if (argc != 4) {
        std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return 1;
    }
    std::ofstream outfile(filename + ".replace");
    if (!outfile) {
        std::cerr << "Error: could not create file " << filename << ".replace" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(infile, line)) {
        line = replace(line, s1, s2);
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}