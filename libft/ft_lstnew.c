/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:07:35 by a          #+#    #+#             */
/*   Updated: 2022/07/26 16:27:08 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return ((void *)0);
	ret->content = content;
	ret->flag = -1;
	ret->next = NULL;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	t_list *t;
	t = ft_lstnew("emre");
	printf("%s", t->content);
}*/
