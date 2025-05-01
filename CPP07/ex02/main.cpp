/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:25:49 by ncharbog          #+#    #+#             */
/*   Updated: 2025/05/01 13:17:47 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	A(6);
	Array<int>	B;
	Array<std::string>	C(5);

	A[1] = 9;
	C[4] = "salut";
	std::cout << "Size of Array A: " << A.size() << std::endl;
	std::cout << "Size of Array B: " << B.size() << std::endl;
	std::cout << "Size of Array C: " << C.size() << std::endl;
	try
	{
		std::cout << "Trying to access to A[1]: " << A[1] << std::endl;
		std::cout << "Trying to access to C[4]: " << C[4] << std::endl;
		std::cout << "Trying to access to A[8]: " << A[8] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
