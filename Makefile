NAME=Libft
FILES = *.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)

all: $(NAME)

%.o %.c
	$(CC)	-c $< -o $@
$(NAME): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all