/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:57:09 by oamairi           #+#    #+#             */
/*   Updated: 2025/02/26 09:04:44 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;
	int	i;

	size_dest = 0;
	i = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest = size_dest + 1;
	}
	while (src[i] != '\0')
	{
		dest[size_dest] = src[i];
		i = i + 1;
		size_dest = size_dest + 1;
	}
	dest[size_dest] = '\0';
	return (dest);
}
