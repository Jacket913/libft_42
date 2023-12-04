NAME = libft.a

SOURCES = *.c

INCLUDE = -I ./libft

OBJ = ${SOURCES:.c=.o}

FLAGS = -Werror -Wextra -Wall

#COLORS
C_GOOD    =    "\033[32mSUCCESS"
C_ORAN    =    "\033[33mCleaning "
C_RED    =    "\033[31mDelete   "
C_WHIT    =     "\033[0m [ $(NAME) ]"
C_BLUE    =    "\033[34;1mCompiling"

${NAME} : libft.h
	@cc ${FLAGS} -C ${SOURCES} ${INCLUDE}
	@ar rc ${NAME} ${OBJ}
	@ranlib ${NAME}
	@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

all : ${NAME}

clean :
	@rm -f ${OBJ}

fclean :
	@rm -rf ${NAME}

re : fclean all
