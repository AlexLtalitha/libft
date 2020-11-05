/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:27:29 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:27:31 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_length(int n, int *mult)
{
	int count;
	int	extra;

	*mult = 1;
	if (n < 0)
		extra = 2;
	else
		extra = 1;
	count = 0;
	while (n / 10 != 0)
	{
		n = n / 10;
		*mult = *mult * 10;
		count++;
	}
	count++;
	return (count + extra);
}

char		*ft_itoa(int n)
{
	int		mult;
	char	*result;
	int		i;
	long	nb;

	nb = (long)n;
	result = (char*)malloc(sizeof(char) * check_length(nb, &mult));
	if (result == NULL)
		return (NULL);
	if (nb == 0)
		return (ft_strcpy(result, "0"));
	i = 0;
	if (nb < 0)
	{
		result[i++] = '-';
		nb = nb * -1;
	}
	while (mult != 0)
	{
		result[i++] = nb / mult + '0';
		nb = nb % mult;
		mult = mult / 10;
	}
	result[i] = '\0';
	return (result);
}
