/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:47:38 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/26 21:41:48 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freelist(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		free(lst->content);
		free(lst);
		lst = temp;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*tmp_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = f(lst);
	tmp_list = new_list;
	while (lst->next)
	{
		lst = lst->next;
		new_list->next = f(lst);
		if (new_list->next == NULL)
		{
			freelist(tmp_list);
			return (NULL);
		}
		new_list = new_list->next;
	}
	return (tmp_list);
}
