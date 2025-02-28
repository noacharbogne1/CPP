/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:31 by ncharbog          #+#    #+#             */
/*   Updated: 2025/02/28 15:48:57 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phonebook.h"

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		void	add(void);
		void	search(Contact contacts[8]);
		void	print_contact(Contact contact);
};

#endif