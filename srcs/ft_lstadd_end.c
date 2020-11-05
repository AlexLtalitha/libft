/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:28:11 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:28:12 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*cpy;

	if (alst == NULL || new == NULL)
		return ;
	cpy = *alst;
	if (cpy == NULL)
	{
		*alst = new;
		return ;
	}
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = new;
}
