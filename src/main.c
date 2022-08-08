/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: as <as@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:45:43 by as          #+#    #+#             */
/*   Updated: 2022/08/08 18:50:14 by as         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	splitter(char *av, t_list **stack)
{
	int		i;
	char	**x;	
	t_list	*new;

	i = -1;
	x = ft_split(av, 32);
	while (x[++i])
	{
		new = ft_lstnew(ft_atoi(x[i]));
		ft_lstadd_back(stack, new);
	}
	i = 0;
	while (x[i])
		free(x[i++]);
	free(x);
}

void	add_stack(t_list **stack, char **av)
{
	t_list	*new;
	int		i;

	i = 1;
	while (av[i])
	{
		if (ft_strchr(av[i], ' ') != NULL)
			splitter(av[i], stack);
		else
		{
			new = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(stack, new);
		}
		i++;
	}
	check_dup(stack);
	stacknflag(stack);
}

int	elementss_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	find_size(t_list **list_a, t_list **list_b)
{
	if (ft_lstsize(*list_a) <= 5)
		without_radix(list_a, list_b);
	else
		radix_sort(list_a, list_b);
}

int	main(int ac, char **av)
{
	t_list	**list_a;
	t_list	**list_b;

	if (ac < 2)
		return (0);
	list_a = (t_list **)malloc(sizeof(t_list *));
	list_b = (t_list **)malloc(sizeof(t_list *));
	*list_a = NULL;
	*list_b = NULL;
	add_stack(list_a, av);
	if (elementss_sorted(list_a))
	{
		free_stck(list_a);
		free_stck(list_b);
		return (0);
	}
	find_size(list_a, list_b);
	free_stck(list_a);
	free_stck(list_b);
	return (0);
}
