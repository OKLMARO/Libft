NAME=Libft
FILES = ft_atoi.c \
		ft_strcat.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncpy.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_strrchr.c \
		main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@
$(NAME): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all