/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:41:07 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:42:00 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	reverse(t_list **stack)
{
	t_list	*end_prev;
	t_list	*end;

	if (ft_lstsize(*stack) < 2)
		return ;
	end_prev = *stack;
	while (end_prev ->next->next)
		end_prev = end_prev->next;
	end = end_prev->next;
	end_prev->next = NULL;
	end->next = *stack;
	*stack = end;
}

void	rra(t_list **list_a)
{
	reverse(list_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **list_b)
{
	reverse(list_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	if ((ft_lstsize(*list_a) < 2) || (ft_lstsize(*list_b) < 2))
		return ;
	reverse(list_a);
	reverse(list_b);
	ft_putstr_fd("rrr\n", 1);
}
