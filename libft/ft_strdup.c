/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:05:28 by a          #+#    #+#             */
/*   Updated: 2022/08/08 19:05:29 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_len;

	s1_len = ft_strlen(s1) + 1;
	s2 = (char *) malloc((s1_len) * sizeof(char));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, s1_len);
	return (s2);
}
