/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_pre.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:44:35 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:44:36 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_pre(char const *s1, char *delimiter, char const *s2)
{
	char	*new_str;

	if (s1 == NULL || s2 == NULL || delimiter == NULL)
		return (NULL);
	new_str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ ft_strlen(delimiter) + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, delimiter);
	ft_strcat(new_str, s2);
	new_str[ft_strlen(new_str)] = '\0';
	return (new_str);
}
