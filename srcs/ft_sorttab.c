/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:38:30 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:38:32 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sorttab(void **tab, int len, int (*cmp)())
{
	int		i;
	int		edited;
	char	*tmp;

	edited = 1;
	while (edited == 1)
	{
		edited = 0;
		i = 1;
		while (i < len)
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				tmp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmp;
				edited = 1;
			}
			i++;
		}
	}
}
