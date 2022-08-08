/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:11:08 by a          #+#    #+#             */
/*   Updated: 2022/08/08 19:05:08 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst && ++size)
	{
		lst = lst -> next;
	}
	return (size);
}
/*
#include <stdio.h>
int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	
	a = ft_lstnew("a");
	b = ft_lstnew("b");
	c = ft_lstnew("c");

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&b, c);
	printf("%d", ft_lstsize(a));

}*/
