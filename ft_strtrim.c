/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:36:08 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/19 15:36:08 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_trim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (i == 0 || !s1[i + 1])
		{
			j = 0;
			while (set[j])
			{
				if (s1[i] == set[j])
					return (1);
				j++;
			}
		}
		i++;
	}
	return (0);
}

int	ft_strtrim_len(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	res;
	int	rencontre;

	i = 0;
	res = 0;
	rencontre = 0;
	while (s1[i])
	{
		if (i == 0 || !s1[i + 1])
		{
			j = 0;
			while (set[j])
			{
				if (s1[i] == set[j])
					rencontre = 1;
				j++;
			}
			if (!rencontre)
				res++;
		}
		res++;
		i++;
	}
	return (res);
}

void	*init_trim(int *i_s1, int *i_res, const char *s1, const char *set)
{
	*i_s1 = 0;
	*i_res = 0;
	return (malloc(sizeof(char) * (ft_strtrim_len(s1, set) + 1)));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_s1;
	int		i_res;
	char	*res;

	res = init_trim(&i_s1, &i_res, s1, set);
	if (!res)
		return (0);
	while (s1[i_s1])
	{
		if (i_s1 == 0 || !s1[i_s1 + 1])
		{
			if (!is_trim(&s1[i_s1], set))
			{
				res[i_res] = s1[i_s1];
				i_res++;
			}
		}
		else
		{
			res[i_res] = s1[i_s1];
			i_res++;
		}
		i_s1++;
	}
	return (res);
}
