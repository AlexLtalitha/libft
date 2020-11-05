/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strtab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:24:17 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:24:18 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_strtab(char **tab)
{
	char	**head;

	if (tab == NULL)
		return ;
	head = tab;
	while (*tab)
	{
		free(*tab);
		tab++;
	}
	free(head);
}
