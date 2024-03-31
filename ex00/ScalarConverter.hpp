/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:33:10 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/31 17:29:14 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include<iostream>
# include<string>
# include<cstdlib>
# include<climits>

class ScalarConverter {
	ScalarConverter();

	public:
		virtual ~ScalarConverter() = 0;
		ScalarConverter(ScalarConverter &s);
		ScalarConverter &operator = (ScalarConverter &s);

		static void convert(std::string input);
};

#endif