/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:30:46 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:30:48 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list*)malloc(sizeof(*lst));
	if (lst == NULL)
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
		return (lst);
	}
	if (content_size == 0)
		lst->content = (void*)content;
	else
	{
		lst->content = malloc(sizeof(char) * (content_size + 1));
		ft_bzero(lst->content, content_size + 1);
		ft_memcpy(lst->content, content, content_size);
	}
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
