/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:41:44 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:41:45 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len_s2;

	i = 0;
	j = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	while (i < len_s2)
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
