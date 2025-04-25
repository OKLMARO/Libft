/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:27:54 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/09 16:27:54 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t	i;
	size_t	j;
	char	*temp1;
	char	*temp2;

	temp1 = (char *) pointer1;
	temp2 = (char *) pointer2;
	i = 0;
	j = 1;
	while (j < size && i < size)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		if (temp1[j] != temp2[j])
			return (temp1[j] - temp2[j]);
		i += 2;
		j += 2;
	}
	return (0);
}
