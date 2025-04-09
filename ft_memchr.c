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

void	*memchr(const void *memoryBlock, int searchedChar, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (memoryBlock[i] == searchedChar)
			return (&memoryBlock[i]);
		i++;
	}
	return (0);
}
