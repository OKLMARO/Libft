/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:14:50 by oamairi           #+#    #+#             */
/*   Updated: 2025/02/27 11:12:30 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_good(char str)
{
	if (str == '\t')
		return (1);
	else if (str == '\n')
		return (1);
	else if (str == '\v')
		return (1);
	else if (str == '\f')
		return (1);
	else if (str == '\r')
		return (1);
	else if (str == ' ')
		return (1);
	else if (str == '+')
		return (1);
	else if (str == '-')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	res;

	i = 0;
	is_negative = 1;
	res = 0;
	while (is_good(str[i]) == 1 && str[i] != '\0')
	{
		if (str[i] == '-')
			is_negative = is_negative * -1;
		i = i + 1;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i = i + 1;
	}
	res = res * is_negative;
	return (res);
}
