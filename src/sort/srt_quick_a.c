/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srt_quick_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:22:22 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/21 03:28:30 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sort.h"

// TODO :
// 		- 	Trouver un pivot (idealement de maniere opti).
// 		- 	Vider les plus petits nombres en dessous de ce pivot depuis
// 			la stack a dans b.

static t_list	*srt_find_pivot(t_list *lst)
{
	t_list	*pivot;
	int		size;
	int		i;

	pivot = lst;
	size = ft_lstsize(pivot);
	i = 0;
	if (!(size % 2))
		size = (size + 1) / 2;
	else
	 	size = size / 2;
	while (i++ < size)
		pivot = pivot->next;
	return (pivot);
}

static void	srt_quick_a_extension(t_stack *stack, t_ptrs **ptr, t_list *pivot)
{
	while ((*ptr)->top && (*ptr)->bot
			&& ((*ptr)->top != pivot || (*ptr)->bot != pivot))
	{
		// ft_printf("Top VS Pivot : %s vs %s\n", (*ptr)->top->content, pivot->content);
		if (ft_atoi((*ptr)->top->content) < ft_atoi(pivot->content))
		{
			st_dig_in_a(&stack, (*ptr)->top);
			do_pb(stack);
			return ;
		}
		// ft_printf("Bot VS Pivot : %s vs %s\n", (*ptr)->bot->content, pivot->content);
		if (ft_atoi((*ptr)->bot->content) < ft_atoi(pivot->content))
		{
			st_dig_in_a(&stack, (*ptr)->bot);
			do_pb(stack);
			return ;
		}
		// ft_printf("Coucou les potes\n");
		// (*ptr)->top = (*ptr)->top->next;
		(*ptr)->bot = (*ptr)->bot->next;
		// (*ptr)->bot = st_grab_before(stack->a, (*ptr)->top);
		(*ptr)->top = st_grab_before(stack->a, (*ptr)->top);
	}
	// if ((*ptr)->top && ptr->bot && (ptr->top == pivot || ptr->bot == pivot))
	if ((*ptr)->top == pivot || (*ptr)->bot == pivot)
	{
		st_dig_in_a(&stack, pivot);
		do_pb(stack);
	}
}

void	srt_quick_a(t_stack **stack)
{
	t_list	*lst;
	t_list	*pivot;
	t_ptrs 	*ptr;

	ptr = malloc(sizeof(t_ptrs));
	// while ((*stack)->a->next)
	while ((*stack)->a)
	{
		lst = (*stack)->a;
		ptr->top = ft_lstlast(lst);
		// ft_printf("Coucou le debut\n");
		ptr->bot = lst;
		pivot = srt_find_pivot(lst);
		// ft_printf("Pivot : %s\n", pivot->content);
		// ft_printf("Pivot = %s\n", pivot->content);
		// st_print(*stack);
		srt_quick_a_extension(*stack, &ptr, pivot);
		// if (srt_quick_a_extension(*stack, &ptr, pivot) == EXIT_FAILURE)
		// ft_printf("Juste avant le test\n");
		// if (ptr->top && ptr->bot && (ptr->top == pivot || ptr->bot == pivot))
		// {
		// 	st_dig_in_a(stack, pivot);
		// 	do_pb(*stack);
		// }
		// ft_printf("Coucou la fin\n");
		// st_print(*stack);
	}
	free(ptr);
	// ft_printf("Coucou la toute fin\n");
}
