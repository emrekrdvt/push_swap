/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:24:38 by a          #+#    #+#             */
/*   Updated: 2022/08/05 15:40:11 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*trsh;

	if (!lst)
		return ;
	if (*lst)
	{
		trsh = ft_lstlast(*lst);
		trsh->next = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *a;
	t_list *b;
	
	a = ft_lstnew(NULL);
	b = ft_lstnew("b");
	

}*/
