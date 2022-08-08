/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:50:59 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:51:21 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*end;
	t_list	*start;

	if (ft_lstsize(*stack) < 2)
		return ;
	start = *stack;
	end = ft_lstlast(*stack);
	*stack = (*stack)->next;
	end->next = start;
	start->next = NULL;
}

void	ra(t_list **list_a)
{
	rotate(list_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **list_b)
{
	rotate(list_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **list_a, t_list **list_b)
{
	if ((ft_lstsize(*list_a) < 2) || (ft_lstsize(*list_b) < 2))
		return ;
	rotate(list_a);
	rotate(list_b);
	ft_putstr_fd("rr\n", 1);
}
