##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## compile my lib
##

NAME = gameoflife

CFLAGS = -Wall -Werror -Wextra -I./include

SRC  = main.c \

OBJ = $(SRC:.c=.o)

LIBS = -L./lib/my -lmy

all:	$(NAME)

$(NAME): $(OBJ)
	make re -C lib/my
	$(CC) $(INCLUDE) $(CSFLAGS) $(OBJ) -o $(NAME) $(LIBS)

clean:
	make clean -C lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my
	rm -f $(NAME)

re: fclean all