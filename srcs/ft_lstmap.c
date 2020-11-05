/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:30:33 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:30:35 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*begin;
	t_list	*tmp;

	new_list = (t_list*)malloc(sizeof(t_list));
	begin = new_list;
	if (lst == NULL || new_list == NULL || f == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		tmp = (*f)(lst);
		new_list->content = ft_strdup(tmp->content);
		new_list->content_size = tmp->content_size;
		new_list->next = (t_list*)malloc(sizeof(t_list));
		new_list = new_list->next;
		lst = lst->next;
	}
	tmp = (*f)(lst);
	new_list->content = ft_strdup(tmp->content);
	new_list->content_size = tmp->content_size;
	new_list->next = NULL;
	return (begin);
}
