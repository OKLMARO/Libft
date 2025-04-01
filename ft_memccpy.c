/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:52:16 by oamairi           #+#    #+#             */
/*   Updated: 2025/03/31 15:52:16 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memccpy(char *dest, char *src, char ch, int maxSize)
{
	int	i;

	i = 0;
	while (src && src[i] != ch && i < maxSize)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == ch || i == maxSize)
		return (0);
	i++;
	return (&src[i]);
}
