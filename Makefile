##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## NO DESCRIPTION FOUND
##

NAME	=	rush3

INCLUDE	=	my.h

SRC_TEST = tests/unit_tests.c \
		rush3.c
       	

NAME_TEST = units_tests

CRIFLAGS = -l criterion --coverage

IFLAGS = -I ./include

LFLAGS = -L lib/ -lmy

CFLAGS= -W -Wall -Werror -Wextra -g

all:	$(NAME)

tests_run:
	gcc -o units_tests tests/unit_tests.c rush3.c -lmy -L./lib/ -l criterion --coverage
	./$(NAME_TEST)

$(NAME):	$(OBJ)
	gcc -o $(NAME) main.c -lmy -L./lib/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

