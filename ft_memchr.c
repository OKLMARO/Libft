/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:21:25 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/09 16:21:25 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *) memoryBlock;
	while (i < size)
	{
		if (temp[i] == searchedChar)
			return (&temp[i]);
		i++;
	}
	return (0);
}
