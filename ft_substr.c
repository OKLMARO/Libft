/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 23:42:01 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/15 23:42:01 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;
	int				j;

	i = start;
	while (s[i] && (i - start) < len)
		i++;
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (0);
	j = 0;
	i = start;
	while (s[i] && j < len)
	{
		res[j] = s[i];
		j++;
		i++;
	}
	return (res);
}
