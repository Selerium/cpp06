/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:14:28 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 13:55:56 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int main(int ac, char **av) {
	for (int i = 1; i < ac; i++) {
		ScalarConverter::convert(av[i]);
		std::cout << std::endl;
	}
}