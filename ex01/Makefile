NAME		:= tester
CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -std=c++98
RM			:= rm -rf
SRC			:= main.cpp Cat.class.cpp Dog.class.cpp Animal.class.cpp
OBJ			:= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re
