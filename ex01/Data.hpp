/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:43:29 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 14:51:38 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include<iostream>

class Data {
	int code;
	std::string name;

	public:
		Data();
		Data(std::string name, int code);
		Data(Data &s);
		~Data();
		Data &operator = (Data &s);

		std::string getName();
		int getCode();
};

#endif