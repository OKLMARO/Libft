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

int	is_trim(const char s1, const char *set)
{
	int	i;
	int	j;
	int	rencontre;

	i = 0;
	while (s1[i])
	{
		if (i == 0 || !s1[i + 1])
		{
			j = 0;
			rencontre = 0;
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
}

int	init(int *i_s1, int *i_res, char *res)
{
	i_s1 = 0;
	i_res = 0;
	res = malloc(sizeof(char) * (ft_strtrim_len(s1) + 1));
	if (!res)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_s1;
	int		i_res;
	char	*res;

	if (!init(&i_s1, &i_res, res))
		return (0);
	while (s1[i_s1])
	{
		if (i_s1 == 0 || !s1[i_s1 + 1])
		{
			if (!is_trim(s1[i_s1], set))
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
