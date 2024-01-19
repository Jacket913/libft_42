# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacket <jacket@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 15:22:01 by gmoulin           #+#    #+#              #
#    Updated: 2024/01/04 22:34:24 by jacket           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc

CFLAGS		= -Werror -Wextra -Wall

SRC			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
					ft_strcpy.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
					ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
					ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

INCLUDE		= -I ./libft

OBJ			= $(SRC:.c=.o)

BONUS_OBJ	= $(BONUS:.c=.o)

#COLORS
C_GOOD		=	"\033[32mSUCCESS"
C_ORAN		=	"\033[33mCleaning "
C_RED		=	"\033[31mDelete   "
C_WHIT		=	"\033[0m [$(NAME)]"
C_BLUE		=	"\033[34;1mCompiling"

$(NAME) :	$(OBJ)
				@$(CC) $(CFLAGS) -c $(SRC) $(INCLUDE)
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

all:		$(NAME)

bonus:		$(BONUS_OBJ)
				@$(CC) $(CFLAGS) -c $(BONUS) $(INCLUDE)
				@ar rc $(NAME) $(BONUS_OBJ)
				@ranlib $(NAME)
				@echo $(C_BLUE) $(C_WHIT) $(C_GOOD)

clean:
				@rm -f $(OBJ) $(BONUS_OBJ)

fclean:	clean
				@rm -f $(NAME)

re: 		fclean all
