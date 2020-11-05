/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:30:58 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:31:00 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **begin_list)
{
	void	*tmp;
	void	*tmp2;
	void	*next;

	if (begin_list != NULL && begin_list[0] != NULL)
	{
		next = begin_list[0];
		tmp = NULL;
		while (begin_list[0]->next != NULL)
		{
			next = begin_list[0]->next;
			tmp2 = tmp;
			tmp = begin_list[0];
			begin_list[0]->next = tmp2;
			begin_list[0] = next;
		}
		begin_list[0]->next = tmp;
	}
}
