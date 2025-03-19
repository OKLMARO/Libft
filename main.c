/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:58:56 by oamairi           #+#    #+#             */
/*   Updated: 2025/03/19 15:58:56 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);

int	main(void)
{
	printf("%s\n", ft_strchr("salut comment allez vous ?", 'w'));
	return (0);
}
