/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:52:38 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/06 23:49:02 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &s) {
	(void) s;
	std::cout << "Copy contructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator = (ScalarConverter &s) {
	(void) s;
	std::cout << "Copy assignment operator overloaded" << std::endl;
	return *this;
}

void ScalarConverter::convert(std::string input) {
	bool flag = false;

	try {
		// validation of input:
		if (input == "-2147483649" || input == "2147483648")
			throw std::exception();
		if (input.length() > 1 && (input[0] < '0' || input[0] > '9') && input[0] != '-')
			throw std::exception();
		for (int i = 1; i < (int) input.length(); i++) {
			if (i == (int) input.length() - 1 && input[i] == 'f')
				break ;
			if (!flag && input[i] == '.') {
				flag = true;
				continue ;
			}
			if (input[i] < '0' || input[i] > '9')
				throw std::exception();
		}
		if (input[input.length() - 1] == 'f' && !flag)
			throw std::exception();

		// finding out initial type:
		//		1) it's a float:
		if (input.find_last_of('f') != std::string::npos) {
			float answer = (float) atof(input.c_str());

			std::cout << "char: ";
			if ((int) answer < 32 || (int) answer > 127)
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << static_cast<char>(answer) << std::endl;
			std::cout << "int: ";
			if (answer >= 2147483584.0f || answer <= -2147483584.0f )
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << static_cast<int>(answer) << std::endl;
			std::cout << "float: " << answer << std::endl
				<< "double: " << static_cast<double>(answer) << std::endl;
		}
		else if (input.find_first_of('.') != std::string::npos) {
			double answer = atof(input.c_str());

			std::cout << "char: ";
			if ((int) answer < 32 || (int) answer > 127)
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << static_cast<char>(answer) << std::endl;
			std::cout << "int: ";
			if (answer >= 2147483584.0f || answer <= -2147483584.0f )
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << static_cast<int>(answer) << std::endl;
			std::cout << "float: " << static_cast<float>(answer) << std::endl
				<< "double: " << answer << std::endl;
		}
		else if (input.length() == 1 && (input[0] < '0' || input[0] > '9')) {
			char answer = input[0];

			std::cout << "char: ";
			if (answer >= 32)
				std::cout << answer << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(answer) << std::endl
				 << "float: " << static_cast<float>(answer) << std::endl
				<< "double: " << static_cast<double>(answer) << std::endl;
		}
		else {
			int answer = atoi(input.c_str());

			std::cout << "char: ";
			if ((int) answer < 32 || (int) answer > 127)
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << static_cast<char>(answer) << std::endl;
			std::cout << "int: " << answer << std::endl
				 << "float: " << static_cast<float>(answer) << std::endl
				<< "double: " << static_cast<double>(answer) << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << "Input is invalid for the scalar types " << std::endl;
	}
}
