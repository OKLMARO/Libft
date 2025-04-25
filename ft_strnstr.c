/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:21:11 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/10 17:21:11 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i_find;
	int	i_str;
	int	to_find_len;

	i_find = 0;
	i_str = 0;
	to_find_len = str_len(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i_str] != '\0' && i_str < len)
	{
		while (str[i_str + i_find] == to_find[i_find] && str[i_str] != '\0')
		{
			if ((i_str + i_find) >= len)
				return (0);
			i_find = i_find + 1;
		}
		if (to_find[i_find] == '\0' && i_find == to_find_len)
			return (&str[i_str]);
		i_str = i_str + 1;
		i_find = 0;
	}
	return (0);
}
