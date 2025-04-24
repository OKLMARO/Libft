/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:06:09 by oamairi           #+#    #+#             */
/*   Updated: 2025/04/24 16:32:02 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;

	lstNew = ft_lstnew();
	while (lst->next)
	{
		lstNew = f(lst);
		lst = lst->next;
		lstNew->next = ft_lstnew();
	}
	lstNew = f(lst);
	return (lstNew);
}
