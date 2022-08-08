/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:39:37 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:40:57 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (ft_lstsize(*src) == 0)
		return ;
	tmp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, tmp);
}

void	pa(t_list **list_b, t_list **list_a)
{
	push(list_b, list_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **list_a, t_list **list_b)
{
	push(list_a, list_b);
	ft_putstr_fd("pb\n", 1);
}
