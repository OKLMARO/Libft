/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:06:09 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/24 16:33:33 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;

	lst_new = ft_lstnew();
	while (lst->next)
	{
		lst_new = f(lst);
		lst = lst->next;
		lst_new->next = ft_lstnew();
	}
	lst_new = f(lst);
	return (lst_new);
}
