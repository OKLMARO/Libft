/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:45:22 by oamairi           #+#    #+#             */
/*   Updated: 2025/03/31 15:45:22 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
