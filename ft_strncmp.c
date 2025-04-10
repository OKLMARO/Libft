/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:16:42 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/10 17:16:42 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *first, const char *second, size_t lenght)
{
	size_t i;

	i = 0;
	while (i < lenght)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
