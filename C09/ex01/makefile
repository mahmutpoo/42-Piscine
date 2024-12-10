CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = sa
SRCS =  ft_strlen.c ft_swap.c ft_strcmp.c ft_putstr.c ft_putchar.c a.c
OBJS = $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re


