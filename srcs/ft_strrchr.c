/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:17:39 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/31 15:17:40 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *r;

	r = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			r = (char*)s;
		s++;
	}
	if (r != NULL)
		return (r);
	else if (c == '\0')
		return ((char*)s);
	else
		return (NULL);
}
