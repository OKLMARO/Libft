/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:05:14 by oamairi           #+#    #+#             */
/*   Updated: 2025/02/26 09:11:09 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size_dest;
	unsigned int	i;

	size_dest = 0;
	i = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest = size_dest + 1;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[size_dest] = src[i];
		i = i + 1;
		size_dest = size_dest + 1;
	}
	while (i < nb)
	{
		dest[size_dest] = '\0';
		i = i + 1;
		size_dest = size_dest + 1;
	}
	return (dest);
}
