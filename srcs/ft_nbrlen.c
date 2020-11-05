/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:33:54 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:33:55 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(int n)
{
	int		count;
	int		extra;
	int		mult;

	mult = 1;
	if (n < 0)
		extra = 2;
	else
		extra = 1;
	count = 0;
	while (n / 10 != 0)
	{
		n = n / 10;
		mult = mult * 10;
		count++;
	}
	return (count + extra);
}
