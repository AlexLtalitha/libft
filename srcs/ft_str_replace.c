/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:39:19 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:39:20 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_new_size(char *str, char *old, char *new)
{
	int		count;
	int		len_old;
	int		len_str;

	len_old = ft_strlen(old);
	len_str = ft_strlen(str);
	count = 0;
	while ((str = ft_strstr(str, old)) != NULL)
	{
		count++;
		str += len_old;
	}
	if (count == 0)
		return (len_str);
	else
		return ((len_str - (count * len_old)) + (count * ft_strlen(new)));
}

void		ft_str_replace(char **str, char *old, char *new)
{
	char	*new_str;
	char	*head;
	char	*cpy;

	new_str = (char*)malloc(sizeof(char) * (get_new_size(*str, old, new) + 1));
	head = new_str;
	cpy = *str;
	while (*cpy)
	{
		if (ft_strncmp(cpy, old, ft_strlen(old)) == 0)
		{
			ft_strcpy(new_str, new);
			new_str += ft_strlen(new);
			cpy += ft_strlen(old);
		}
		else
		{
			*new_str = *cpy;
			new_str++;
			cpy++;
		}
	}
	*new_str = '\0';
	free(*str);
	*str = head;
}
