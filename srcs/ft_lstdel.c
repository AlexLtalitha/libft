/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:28:47 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:28:50 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*cpy;
	t_list	*next;

	if (alst == NULL || *alst == NULL || del == NULL)
		return ;
	cpy = *alst;
	while (cpy->next != NULL)
	{
		next = cpy->next;
		(*del)(cpy->content, cpy->content_size);
		free(cpy);
		cpy = next;
	}
	(*del)(cpy->content, cpy->content_size);
	free(cpy);
	*alst = NULL;
}
