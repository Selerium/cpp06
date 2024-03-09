/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:25:51 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 14:52:02 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"
#include"Data.hpp"

int main () {
	Data *d1 = new Data("chicken", 42);
	uintptr_t d2 = Serializer::serialize(d1);
	Data *d3 = Serializer::deserialize(d2);
	std::cout << "Memory address of data: " << d1 << std::endl
		<< "Serialized memory address: " << d2 << std::endl
		<< "Deserialized memory address: " << d3 << std::endl
		<< "d1: " << d1->getName() << " " << d1->getCode() << std::endl
		<< "d3: " << d3->getName() << " " << d3->getCode() << std::endl;
}