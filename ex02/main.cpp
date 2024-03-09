/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:09:01 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 15:53:13 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate (void) {
	srand(time(NULL));
	if (rand() % 3 == 0) {
		std::cout << "created A" << std::endl;
		return new A();
	}
	if (rand() % 3 == 1) {
		std::cout << "created B" << std::endl;
		return new B();
	}
	std::cout << "created C" << std::endl;
	return new C();
}

void identify (Base *p) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Type is B" << std::endl;
	else
		std::cout << "Type is C" << std::endl;
}

void identify (Base &p) {
	try {
		dynamic_cast<A &>(p);
	} catch (std::exception &e) {
		try {
			dynamic_cast<B &>(p);
		} catch (std::exception &e) {
			std::cout << "Type is C" << std::endl;
			return ;
		}
		std::cout << "Type is B" << std::endl;
		return ;
	}
	std::cout << "Type is A" << std::endl;
}

int main () {
	Base *test = generate();

	identify(test);
	identify(*test);
}