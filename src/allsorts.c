/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allsorts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:33:53 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:37:35 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list **stack, int num)
{
	t_list	*start;
	int		min_index;

	start = *stack;
	min_index = start->flag;
	while (start->next)
	{
		start = start->next;
		if ((start->flag < min_index) && start->flag != num)
			min_index = start->flag;
	}
	return (min_index);
}

void	sort3(t_list **list_a)
{
	if ((*list_a)->flag == find_min(list_a, -1)
		&& (*list_a)->next->flag != find_min(list_a, find_min(list_a, -1)))
	{
		ra(list_a);
		sa(list_a);
		rra(list_a);
	}
	else if ((*list_a)->flag == find_min(list_a, find_min(list_a, -1)))
	{
		if ((*list_a)->next->flag == find_min(list_a, -1))
			sa(list_a);
		else
			rra(list_a);
	}
	else
	{
		if ((*list_a)->next->flag == find_min(list_a, -1))
			ra(list_a);
		else
		{
			sa(list_a);
			rra(list_a);
		}
	}
}

void	sort4(t_list **list_a, t_list **list_b)
{
	int	space;

	space = space_between_list(list_a, find_min(list_a, -1));
	if (space == 1)
		ra(list_a);
	else if (space == 2)
	{
		ra(list_a);
		ra(list_a);
	}
	else if (space == 3)
		rra(list_a);
	if (elementss_sorted(list_a))
		return ;
	pb(list_a, list_b);
	sort3(list_a);
	pa(list_b, list_a);
}

void	sort5(t_list **list_a, t_list **list_b)
{
	int	space;

	space = space_between_list(list_a, find_min(list_a, -1));
	if (space == 1)
		ra(list_a);
	else if (space == 2)
	{
		ra(list_a);
		ra(list_a);
	}
	else if (space == 3)
	{
		rra(list_a);
		rra(list_a);
	}
	else if (space == 4)
		rra(list_a);
	if (elementss_sorted(list_a))
		return ;
	pb(list_a, list_b);
	sort4(list_a, list_b);
	pa(list_b, list_a);
}
