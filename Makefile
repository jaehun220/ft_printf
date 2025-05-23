NAME = libftprintf.a

SRCS = ft_printf.c print_char.c print_str.c print_ptr.c print_nbr.c print_unsigned.c print_hex.c print_pcn.c check_error.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re