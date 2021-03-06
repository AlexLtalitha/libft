/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_pt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:19:56 by ltalitha          #+#    #+#             */
/*   Updated: 2020/10/31 15:19:57 by ltalitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_pt(void **pt1, void **pt2)
{
	void	*tmp;

	tmp = *pt1;
	*pt1 = *pt2;
	*pt2 = tmp;
}
