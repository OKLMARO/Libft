/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:17:17 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/19 16:17:17 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && is_charset(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

int	str_len(char *str, int i, char *charset)
{
	int	taille;

	taille = 0;
	while (str[i] != '\0' && is_charset(str[i], charset) == 0)
	{
		i++;
		taille++;
	}
	return (taille);
}

int	count_word(char *str, char *charset)
{
	int	word;
	int	pre;
	int	i;

	word = 0;
	pre = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1)
			pre = 1;
		else if (is_charset(str[i], charset) == 0 && pre == 1)
		{
			pre = 0;
			word++;
		}
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		word;
	char	**res;

	i = 0;
	j = 0;
	word = count_word(str, charset);
	res = malloc(sizeof(char *) * word + 1);
	while (i < word)
	{
		while (is_charset(str[j], charset) == 1)
			j++;
		res[i] = malloc(sizeof(char) * str_len(str, j, charset));
		ft_strcpy(res[i], &str[j], charset);
		j = j + str_len(str, j, charset);
		i++;
	}
	return (res);
}
