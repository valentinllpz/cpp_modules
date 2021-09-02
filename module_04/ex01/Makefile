# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/14 17:58:20 by vlugand-          #+#    #+#              #
#    Updated: 2021/09/02 21:25:01 by vlugand-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex01

SRCS		=	main.cpp\
				Animal.cpp\
				WrongAnimal.cpp\
				Dog.cpp\
				Cat.cpp\
				Brain.cpp\
				WrongCat.cpp

CC			= 	clang++
CFLAGS		= 	-fsanitize=address -Wall -Wextra -Werror -std=c++98

OBJS_PATH	= 	./.objs/
OBJS		= 	${addprefix ${OBJS_PATH}, ${SRCS:.cpp=.o}}

all:		${NAME}

${NAME}:	 ${OBJS_PATH} ${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			@echo "\033[0;32m\033[1mex01 is ready !\033[0m"

${OBJS_PATH}:
			@mkdir -p $@

${OBJS_PATH}%.o: %.cpp
			${CC} ${CFLAGS} -c $< -o $@

clean:
			rm -rf ${OBJS_PATH}
			@echo "\033[0;35m\033[1mCleaned all .o files.\033[0m"

fclean:
			rm -rf ${OBJS_PATH}
			rm -rf ${NAME}
			@echo "\033[0;35m\033[1mCleaned all .o files and executable.\033[0m"

re:			fclean all

.PHONY:		all clean fclean re
