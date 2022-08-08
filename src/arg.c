/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:44:21 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:45:04 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	check_dup(t_list **stack)
{
	t_list	*tmp;

	while ((*stack)->next != NULL)
	{
		tmp = (*stack)->next;
		while (tmp)
		{
			if ((*stack)->content == tmp -> content)
				put_error("duplicated");
			tmp = tmp -> next;
		}
		stack = &(*stack)->next;
	}
}
