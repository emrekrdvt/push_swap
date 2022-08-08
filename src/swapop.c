/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:51:50 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:52:30 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = *stack;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	sa(t_list **list_a)
{
	swap(list_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **list_b)
{
	swap(list_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **list_a, t_list **list_b)
{
	if ((ft_lstsize(*list_a) < 2) || (ft_lstsize(*list_b) < 2))
		return ;
	swap(list_a);
	swap(list_b);
	ft_putstr_fd("ss\n", 1);
}
