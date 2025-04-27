/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:11:52 by oamairi           #+#    #+#             */
/*   Updated: 2025/02/26 11:56:01 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i_find;
	int	i_str;
	int	to_find_len;

	i_find = 0;
	i_str = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i_str] != '\0')
	{
		while (str[i_str + i_find] == to_find[i_find] && str[i_str] != '\0')
		{
			i_find = i_find + 1;
		}
		if (to_find[i_find] == '\0' && i_find == to_find_len)
			return (&str[i_str]);
		i_str = i_str + 1;
		i_find = 0;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	printf("%s", ft_strstr("hello les amis, comment ca va ", ""));
	return 0;
}*/