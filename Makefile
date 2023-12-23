NAME = libft.a
CC = cc
SRC = *.c
INCLUDE = -I ./libft
OBJ = $(SRC:.c=.o)
CFLAGS = -Werror -Wextra -Wall

#COLORS
C_GOOD    =    "\033[32mSUCCESS"
C_ORAN    =    "\033[33mCleaning "
C_RED    =    "\033[31mDelete   "
C_WHIT    =     "\033[0m [ $(NAME) ]"
C_BLUE    =    "\033[34;1mCompiling"

$(NAME) : libft.h
	@$(CC) $(CFLAGS) -c $(SRC) $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

all : $(NAME)

clean :
	@rm -f $(OBJ)

fclean :
	@rm -rf $(NAME)

re : fclean all
