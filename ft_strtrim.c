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
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_s1;
	int		i_res;
	int		j;
	char	*res;

	i = 0;
	i_res = 0;
	res = malloc(sizeof(char) * (ft_strtrim_len(s1) + 1));
	if (!res)
		return (0);
	while (s1[i_s1])
	{
		if (i == 0 || !s1[i_s1 + 1])
		{
			j = 0;
			while (set[j])
			{
				if (s1[i_s1] == set[j])
					rencontre = 1;
				j++;
			}
			if (!rencontre)
			{
				res[i_res];
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