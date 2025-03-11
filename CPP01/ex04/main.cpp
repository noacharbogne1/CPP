/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:16:31 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 12:31:45 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	replaceFile(std::ifstream &in, char **argv){
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string	line;
	std::string	fileName = std::string(argv[1]) + ".replace";
	std::ofstream	file(fileName.c_str());

	if (!file){
		std::cout << "Failed to create " << fileName << std::endl;
		return ;
	}
	while (std::getline(in, line)){
		for (size_t i = 0; i <= line.length() ; i++){
			if ((line.compare(i, s1.length(), s1)) == 0){
				line.erase(i, s1.length());
				line.insert(i, s2);
				i += s2.length();
			}
		}
		file << line << std::endl;
	}
	file.close();
}

int	main(int argc, char **argv){
	if (argc == 4){
		std::ifstream in(argv[1], std::ios_base::in);
		if (!in.is_open()){
			std::cout << "File opening failed" << std::endl;
			return 0;
		}
		replaceFile(in, argv);
		in.close();
	}
	else
		std::cout << "Please comply to : ./sed <filename> <string1> <string2>" << std::endl;
}
