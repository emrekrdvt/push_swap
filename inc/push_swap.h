/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:28:54 by a          #+#    #+#             */
/*   Updated: 2022/08/08 19:10:21 by a         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			c;
	int				content;
	int				flag;
	struct s_list	*next;
}	t_list;

char	*ft_strchr(const char *s, int c);

char	**ft_get_args(int argc, char **argv);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strdup(const char *s1);

int		ft_atoi(const char *str);

int		ft_isdigit(int c);
void	check_dup(t_list **stack);
void	ft_putstr_fd(char *s, int fd);

void	ft_putchar_fd(char c, int fd);

void	ft_lstadd_front(t_list **lst, t_list *new);

char	**ft_split(char const *s, char c);

size_t	ft_strlen(const char *s);

t_list	*ft_lstnew(int content);

int		ft_lstsize(t_list *lst);

char	*ft_strjoin(char const *s1, char const *s2);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

char	*ft_substr(const char *s, unsigned int start, size_t len);

//////////////////////////////////
//         allsorts.c          //
////////////////////////////////

int		find_min(t_list **stack, int num);
void	sort3(t_list **list_a);
void	sort4(t_list **list_a, t_list **list_b);
void	sort5(t_list **list_a, t_list **list_b);

//////////////////////////////////
//        free.c               //
////////////////////////////////

void	ft_freearr(char **str);
void	free_stck(t_list **stack);
int		space_between_list(t_list **stack, int flag);

//////////////////////////////////
//         libdoc.c            //
////////////////////////////////

void	put_error(char *str);
//void check_arg(int ac, char **av);

//////////////////////////////////
//        main.c               //
////////////////////////////////

void	add_stack(t_list **stack, char **av);
int		elementss_sorted(t_list **stack);
void	fins_size(t_list **stack_a, t_list **stack_b);

//////////////////////////////////
//         pushop.c            //
////////////////////////////////

void	push(t_list **src, t_list **dst);
void	pa(t_list **list_b, t_list **list_a);
void	pb(t_list **list_a, t_list **list_b);

//////////////////////////////////
//         radix.c             //
////////////////////////////////

void	radix_sort(t_list **list_a, t_list **list_b);

//////////////////////////////////
//      reverseop.c            //
////////////////////////////////
void	reverse(t_list **stack);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	rrr(t_list **list_a, t_list **list_b);

//////////////////////////////////
//        rotateop.c           //
////////////////////////////////

void	rotate(t_list **stack);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);

//////////////////////////////////
//         stackflag.c         //
////////////////////////////////
void	stacknflag(t_list **stack);

//////////////////////////////////
//        swapop.c             //
////////////////////////////////
void	swap(t_list **stack);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **lista, t_list **list_b);

//////////////////////////////////
//       without_radix.c       //
////////////////////////////////
void	without_radix(t_list **stack_a, t_list **stack_b);

#endif
