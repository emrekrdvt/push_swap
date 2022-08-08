/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:37:57 by a          #+#    #+#             */
/*   Updated: 2022/08/08 18:39:22 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	put_error(char *str)
{
	ft_putstr_fd(str, 1);
	exit (0);
}

void	ft_freearr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
}

void	free_stck(t_list **stack)
{
	t_list	*tmp;
	t_list	*delete;

	tmp = *stack;
	while (tmp)
	{
		delete = tmp;
		tmp = tmp->next;
		free(delete);
	}
	free(stack);
}

int	space_between_list(t_list **stack, int flag)
{
	t_list	*start;
	int		space_lst;

	space_lst = 0;
	start = *stack;
	while (start)
	{
		if (start->flag == flag)
			break ;
		space_lst++;
		start = start->next;
	}
	return (space_lst);
}
