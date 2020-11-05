/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:31:28 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:31:30 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstsearch(t_list *lst, void *obj, int (*f)())
{
	if (lst == NULL || obj == NULL || f == NULL)
		return (NULL);
	while (lst)
	{
		if (f(lst, obj) == 1)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
