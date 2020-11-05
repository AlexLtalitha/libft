/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:23:03 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/30 22:23:04 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_alloc_mem(char **s, int nb, int flag, int i)
{
	char	*tmp;

	if (*s == NULL)
		*s = malloc(sizeof(char) * (LEN_BUF * nb));
	else if (flag == 1)
	{
		s[0][i] = '\0';
		tmp = *s;
		*s = malloc(sizeof(char) * (LEN_BUF) * nb);
		ft_strcpy(*s, tmp);
		free(tmp);
		tmp = NULL;
	}
}

char	**get_static_str(void)
{
	static char		*s = NULL;

	return (&s);
}

void	free_printf(va_list *ap)
{
	char	**s;

	va_end(*ap);
	s = get_static_str();
	free(*s);
	*s = NULL;
}
