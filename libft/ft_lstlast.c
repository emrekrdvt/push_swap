/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:17:13 by a          #+#    #+#             */
/*   Updated: 2022/08/05 15:31:07 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	t_list *a;
	t_list *b;
	
	a = ft_lstnew("a");
	b = ft_lstnew("b");
	ft_lstadd_back(&a,b);
	printf("%s", (a->next)->content);

}*/
