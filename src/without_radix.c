/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   without_radix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:43:47 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:44:01 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	without_radix(t_list **list_a, t_list **list_b)
{
	int	size;

	if (ft_lstsize(*list_a) == 0 || ft_lstsize(*list_a) == 1)
		return ;
	size = ft_lstsize(*list_a);
	if (size == 2)
		sa(list_a);
	else if (size == 3)
		sort3(list_a);
	else if (size == 4)
		sort4(list_a, list_b);
	else if (size == 5)
		sort5(list_a, list_b);
}
