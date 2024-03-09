/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:21:52 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 14:53:06 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

Data::Data() : code(0), name("sample") {
	std::cout << "Constructor called" << std::endl;
}

Data::Data(std::string name, int code) : code(code), name(name) {
}

Data::~Data() {
	std::cout << "Destructor called" << std::endl;
}

Data::Data(Data &s) : code(s.code), name(s.name) {
	(void) s;
	std::cout << "Copy contructor called" << std::endl;
}

Data &Data::operator = (Data &s) {
	if (this != &s) {
		this->name = s.name;
		this->code = s.code;
	}
	std::cout << "Copy assignment operator overloaded" << std::endl;
	return *this;
}

std::string Data::getName() {
	return this->name;
}

int Data::getCode() {
	return this->code;
}