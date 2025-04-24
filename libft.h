/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:51:27 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/24 12:19:41 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <fcntl.h>

int	ft_isalpha(int chr);
int	ft_isdigit(int chr);
int	ft_isalnum(int chr);
int	ft_strlen(char *str);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif
