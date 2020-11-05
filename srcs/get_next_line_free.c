/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:21:22 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/31 15:21:24 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fdlist	**get_static_list(void)
{
	static t_fdlist		*lst = NULL;

	return (&lst);
}

void		init_fdlist(t_fdlist **elem, int fd)
{
	(*elem)->fd = fd;
	(*elem)->tmp = NULL;
	(*elem)->next = NULL;
}

void		free_gnl(int fd)
{
	t_fdlist	**lst;
	t_fdlist	*tmp;
	t_fdlist	*previous;

	lst = get_static_list();
	tmp = *lst;
	previous = NULL;
	while (tmp)
	{
		if (tmp->fd == fd)
		{
			free(tmp->tmp);
			if (previous == NULL)
				*lst = tmp->next;
			else
				previous->next = tmp->next;
			free(tmp);
			return ;
		}
		previous = tmp;
		tmp = tmp->next;
	}
}
