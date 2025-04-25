/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:51:27 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/24 12:19:41 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int chr);
int		ft_isdigit(int chr);
int		ft_isalnum(int chr);
int		ft_strlen(char *str);
int		is_good(char str);
void	ft_bzero(char *s, int n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_isascii(int chr);
int		ft_isprint(int chr);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	*ft_memccpy(char *dest, char *src, char ch, size_t maxSize);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
size_t	ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memcpy(char *dest, char *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char *str, char *charset);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *str, int c);
char	*ft_strcpy(char *dest, char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
size_t	ft_strlcat(char *dest, char *src, size_t destSize);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlen(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strncmp(const char *first, const char *second, size_t lenght);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(char *str, int c);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

#endif
