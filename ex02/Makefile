# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 12:21:33 by jadithya          #+#    #+#              #
#    Updated: 2024/03/09 15:12:26 by jadithya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OS := ${shell uname}

CC := c++

NAME := base

CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \
		main.cpp

OBJS := $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests: $(NAME)
	./convert -2147483648
	@echo " "
	./convert 2147483647
	@echo " "
	./convert a
	@echo " "
	./convert 2
	@echo " "
	./convert "1234"
	@echo " "
	./convert 2.0
	@echo " "
	./convert 2.0f
	@echo " "
	./convert 2147483584.0f
	@echo " "
	./convert -2147483648.0
	@echo " "

42: $(NAME)
	./convert 0
	@echo " "
	./convert nan
	@echo " "
	./convert 42.0f
	@echo " "
	./convert 42.23f

fails: $(NAME)
	./convert -2147483649
	./convert 2147483648
	./convert aa
	./convert 222f
	./convert 2.2.2f
	./convert 2..2
	./convert 2.00.2
	./convert a2
	./convert 2a
	./convert " ada "

.PHONY: all bonus clean fclean re norm