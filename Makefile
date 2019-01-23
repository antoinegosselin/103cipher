##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	src/do_mul.c \
		src/key.c \
		src/main.c \
		src/matrix.c \
		src/print_matrix.c \
		src/print_usage.c \
		src/safe_malloc.c \
		src/decrypt_parsing.c \
		src/decrypt_key.c

NAME	=	103cipher

OBJ	=	$(SRC:.c=.o)

LIB_PATH	=	./lib/my/

LIB_NAME	=	my

TEST_PATH	=	./tests/

CFLAGS	=	-W -Wall -I include/ -lm -lmy

all:	$(NAME) clean

$(NAME):	$(OBJ)
	make -C ./lib/
	gcc -o $(NAME) $(OBJ) -L$(LIB_PATH) -l$(LIB_NAME) $(CFLAGS)

clean:
	make clean -C ./lib/
	rm -f $(OBJ)
	rm -f *.gc*

fclean:	clean
	rm -f $(NAME)
	rm -f $(LIB_PATH)libmy.a
	rm -f unit_test*

re:	fclean all

tests_run:
