/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:00:46 by oamairi           #+#    #+#             */
/*   Updated: 2025/03/31 16:00:46 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*temp_dest;
	char	*temp_src;

	i = 0;
	temp_dest = (char *) dest;
	temp_src = (char *) src;
	while (i < size)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	temp_dest[i] = '\0';
	return (temp_dest);
}
