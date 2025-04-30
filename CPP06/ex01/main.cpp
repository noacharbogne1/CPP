/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:13:16 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/30 14:28:47 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	*d = new Data;

	d->A = 1;
	d->nonEmpty = "salut";
	uintptr_t ptr = Serializer::serialize(d);
	std::cout << "d adress " << d << " | ptr " << ptr << std::endl;
	Data *r = Serializer::deserialize(ptr);
	std::cout << "r adress " << r << " | r A : " << r->A << " | r string : " << r->nonEmpty << std::endl;
	delete d;
}
