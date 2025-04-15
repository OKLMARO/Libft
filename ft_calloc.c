/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:35:44 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/10 17:35:44 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*res;
	size_t	i;
	size_t	j;

	res = malloc(elementCount * elementSize);
	if (!res)
		return (0);
	while (i < elementCount)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
