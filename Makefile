##
## EPITECH PROJECT, 2018
## MUL_my_defender_2018
## File description:
## makefile
##

CC	= gcc -g

RM	= rm -f

NAME	= tetris

SRC	= main.c    \
	  my_option.c   \
	  init_struct.c \
	  utils.c   \
	  my_chang.c    \
	  my_option_bis.c   \
	  my_chang_bis.c

OBJ	= $(addprefix src/,$(SRC:.c=.o))

CFLAGS	= -W -Wextra -Wall -I include/

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
