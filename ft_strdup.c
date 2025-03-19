/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:31:25 by romukena          #+#    #+#             */
/*   Updated: 2025/03/04 00:03:28 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ftstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ftstrlen(src) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char *src = "Hello, les amis";
	char *copie;

	copie = ft_strdup(src);

	printf("%s\n", copie);
	printf("%s\n", src);


	free(copie);
	return 0;

}*/
