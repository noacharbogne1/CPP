/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:19:56 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/17 11:18:03 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(0));
	int	rand = (std::rand() % 3);
	if (rand == 0)
	{
		A *p = new A();
		std::cout << "Pointer of type A generated" << std::endl;
		return p;
	}
	else if (rand == 1)
	{
		B *p = new B();
		std::cout << "Pointer of type B generated" << std::endl;
		return p;
	}
	else if (rand == 2)
	{
		C *p = new C();
		std::cout << "Pointer of type C generated" << std::endl;
		return p;
	}
	return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Pointer p is type A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Pointer p is type B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Pointer p is type C" << std::endl;
	else
		std::cout << "Pointer p type is unknown" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "Pointer p is type A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			p = dynamic_cast<B&>(p);
			std::cout << "Pointer p is type B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				p = dynamic_cast<C&>(p);
				std::cout << "Pointer p is type C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "p type is unknown" << std::endl;
			}
		}

	}
}

int	main(void)
{
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
}
