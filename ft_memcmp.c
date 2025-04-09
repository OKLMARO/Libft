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

int	memcmp(const void *pointer1, const void *pointer2, int size)
{
	int	i;

	i = 0;
	j = 1;
	while (j < size && i < size)
	{
		if (pointer1[i] != pointer2[i])
			return (pointer1[i] - pointer2[i]);
		if (pointer1[j] != pointer2[j])
			return (pointer1[j] - pointer2[j]);
		i += 2;
		j += 2;
	}
	return (0);
}
