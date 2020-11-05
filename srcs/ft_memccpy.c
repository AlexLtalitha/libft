/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:32:11 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:32:12 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char*)dst;
	while (i < n)
	{
		str[i] = ((char*)src)[i];
		if (str[i] == (char)c)
			return (str + i + 1);
		i++;
	}
	return (NULL);
}
