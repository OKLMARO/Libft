/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:34:30 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/19 15:34:30 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*put_in_tab(char **strs, char *sep, char *dest, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
		{
			while (sep[j])
				dest[k++] = sep[j++];
		}
		j = 0;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_length;
	char	*dest;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length = total_length + ftstrlen(strs[i]);
		if (i < size - 1)
			total_length = total_length + ftstrlen(sep);
		i++;
	}
	dest = malloc(sizeof(char) * (total_length + 1));
	if (!dest)
		return (0);
	if (size == 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	dest = put_in_tab(strs, sep, dest, size);
	dest[total_length] = '\0';
	return (dest);
}
