/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:50:23 by a          #+#    #+#             */
/*   Updated: 2022/08/08 20:06:44 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	radix_sort(t_list **list_a, t_list **list_b)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = ft_lstsize(*list_a);
	while (!elementss_sorted(list_a))
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*list_a)->flag >> i) & 1) == 1)
				ra(list_a);
			else
				pb(list_a, list_b);
		}
		while (ft_lstsize(*list_b) != 0)
			pa(list_b, list_a);
		i++;
	}
}
