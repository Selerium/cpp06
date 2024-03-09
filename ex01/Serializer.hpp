/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 23:54:19 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 14:35:40 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include<iostream>
# include<string>
# include<cstdlib>
# include<climits>
# include<stdint.h>
# include"Data.hpp"

class Serializer {
	public:
		Serializer();
		virtual ~Serializer() = 0;
		Serializer(Serializer &s);
		Serializer &operator = (Serializer &s);

		static uintptr_t serialize (Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif