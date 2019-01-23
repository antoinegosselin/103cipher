##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for libmy
##

SRC	=	deprecated/my_str_intervcmp.c \
		deprecated/my_str_intervcpy.c \
		deprecated/my_str_max_size.c \
		deprecated/my_strtextalloc.c \
		my_display/my_putchar.c \
		my_display/my_put_errchar.c \
		my_display/my_put_errstr.c \
		my_display/my_putfloat.c \
		my_display/my_putnbr.c \
		my_display/my_putstr.c \
		my_display/my_printf.c \
		my_display/my_printf_flag.c \
		my_display/my_printf_flag2.c \
		my_display/my_putnbr_oct.c \
		my_display/my_putnbr_bin.c \
		my_display/my_putnbr_hex.c \
		my_math/my_compute_power_rec.c \
		my_math/my_compute_square_root.c \
		my_math/my_find_is_prime_sup.c \
		my_math/my_isneg.c \
		my_math/my_is_prime.c \
		my_math/my_minmax.c \
		my_memory/my_safemalloc.c\
		my_memory/my_stralloc.c \
		my_str/my_char_is.c \
		my_str/my_getnbr.c \
		my_str/my_revstr.c \
		my_str/my_strcat.c \
		my_str/my_strcat.c \
		my_str/my_strcmp.c \
		my_str/my_strcpy.c \
		my_str/my_strdup.c \
		my_str/my_str_isneg.c \
		my_str/my_str_isnum.c \
		my_str/my_strlen.c \
		my_str/my_str_min_max.c \
		my_str/my_str_push.c \
		my_str/my_strreplace.c \
		my_str/my_strstr.c \
		my_str/my_strremovechar.c \
		my_str_int/my_add_neg.c \
		my_str_int/my_atoi.c \
		my_str_int/my_itoa.c \
		my_str_int/my_remove_neg.c \
		my_str_int/my_remove0.c \
		my_str/my_count_line.c \
		my_str/my_line_lenght.c \
		my_str/my_str_to_line_arr.c \
		my_str/my_line_lenght.c \
		my_fs/my_file_readall.c \
		my_fs/my_file_readbyte.c \
		my_fs/my_file_size.c \
		my_fs/my_open.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I ../include/ -c

NAME	=	my/libmy.a

all:
	gcc $(SRC) $(CFLAGS)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
