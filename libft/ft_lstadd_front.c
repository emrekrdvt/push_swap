/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aa <aa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:04:59 by aa          #+#    #+#             */
/*   Updated: 2022/08/05 21:10:57 by aa         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *a;
	t_list *b;
	
	a= ft_lstnew("emre");
	b= ft_lstnew("krd");

	ft_lstadd_front(&a, b);
	printf("%s", a->content);

}*/
