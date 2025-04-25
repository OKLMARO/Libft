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
	t_list	**first_lst_new;

	first_lst_new = &lst_new;
	while (lst->next)
	{
		lst_new = f(lst);
		del(lst);
		lst = lst->next;
		lst_new = lst_new->next;
	}
	lst_new = f(lst);
	return (*first_lst_new);
}
