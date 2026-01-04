##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## compile my lib
##

NAME = 	libmy.a

CFLAGS = -Wall -Werror -Wextra

SRC  = my_strlen.c \
	open_file.c \
	read_file.c \
	my_memcpy.c \
	my_realloc.c \

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
