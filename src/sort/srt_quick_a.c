/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srt_quick_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:22:22 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/14 16:01:29 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*srt_find_pivot(t_stack *stack, int pivot_value)
{
	int		i;
	int		size;
	t_list	*pivot;

	pivot = stack->a;
	while (ft_atoi(pivot->content) != pivot_value)
		pivot = pivot->next;
	return (pivot);
}

static int	srt_if_extent(t_list *ptr, t_list *pivot, t_stack *stack)
{
	if (ft_atoi(ptr->content) < ft_atoi(pivot->content))
	{
		st_dig_in_a(&stack, ptr);
		do_pb(stack);
		return (1);
	}
	else
		return (0);
}

static int	srt_if(t_ptrs **ptr, t_list *pivot, t_stack *stack)
{
	if (srt_if_extent((*ptr)->top, pivot, stack)
		|| srt_if_extent((*ptr)->bot, pivot, stack))
		return (1);
	if ((*ptr)->top != pivot)
		(*ptr)->top = st_grab_before(stack->a, (*ptr)->top);
	if ((*ptr)->bot != pivot)
		(*ptr)->bot = (*ptr)->bot->next;
	return (0);
}

static void	srt_quick_a_ext(t_stack *stack, t_ptrs **ptr, t_list *pivot, int i)
{
	int		n_transfer;
	int		n_max;

	n_transfer = 0;
	n_max = stack->size / stack->chunks;
	if (i == stack->chunks - 1)
		n_max = ft_lstsize(stack->a);
	while (n_transfer++ <= n_max)
	{
		(*ptr)->top = ft_lstlast(stack->a);
		(*ptr)->bot = stack->a;
		while ((*ptr)->top && (*ptr)->bot
			&& ((*ptr)->top != pivot || (*ptr)->bot != pivot))
		{
			if (srt_if(ptr, pivot, stack))
				break ;
			if ((*ptr)->top == pivot && (*ptr)->bot == pivot)
			{
				st_dig_in_a(&stack, pivot);
				do_pb(stack);
				return ;
			}
		}
	}
}

void	srt_quick_a(t_stack *stack)
{
	int		i_chunks;
	int		i_pivot;
	t_ptrs	*ptr;
	t_list	*lst;
	t_list	*pivot;

	i_chunks = 0;
	i_pivot = stack->size / stack->chunks;
	ptr = malloc(sizeof(t_ptrs));
	while (stack->a->next && i_chunks < stack->chunks)
	{
		lst = stack->a;
		ptr->top = ft_lstlast(lst);
		ptr->bot = lst;
		if (i_chunks == stack->chunks - 1)
			i_pivot = stack->size;
		pivot = srt_find_pivot(stack, stack->sorted[i_pivot - 1]);
		srt_quick_a_ext(stack, &ptr, pivot, i_chunks);
		i_chunks++;
		i_pivot += stack->size / stack->chunks;
	}
	free(ptr);
}
