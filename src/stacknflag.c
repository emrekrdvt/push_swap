/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacknflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:42:08 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:43:34 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static	t_list	*find_anothermin(t_list **stack)
{
	t_list	*tmp;
	t_list	*min;
	int		sign;

	tmp = *stack;
	sign = 0;
	min = NULL;
	if (!tmp)
		return (NULL);
	if (tmp)
	{
		while (tmp)
		{
			if ((tmp->flag == -1) && (!sign || tmp->content < min->content))
			{
				sign = 1;
				min = tmp;
			}
			tmp = tmp->next;
		}
	}
	return (min);
}

void	stacknflag(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = find_anothermin(stack);
	while (tmp)
	{
		tmp->flag = i++;
		tmp = find_anothermin(stack);
	}
}
