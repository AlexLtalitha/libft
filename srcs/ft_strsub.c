/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:18:46 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/31 15:18:48 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	if (s == NULL)
		return (NULL);
	new_str = (char*)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	s = s + start;
	while (*s != '\0' && i < len)
	{
		new_str[i] = *s;
		s++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
