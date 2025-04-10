NAME = libft.a
#FILES = ft_atoi.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncpy.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \
		main.c

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