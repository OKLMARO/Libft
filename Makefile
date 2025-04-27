NAME = libft.a
SRC = $(shell echo *.c)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all