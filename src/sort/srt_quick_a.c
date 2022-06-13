/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srt_quick_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:22:22 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/13 23:47:32 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO :
// 		- 	Trouver un pivot (idealement de maniere opti).
// 		- 	Vider les plus petits nombres en dessous de ce pivot depuis
// 			la stack a dans b.
// 	Ajouter au dernier chunk :
//		Taille totale - taille/nb_chunks * nb_chunks

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

static void	srt_quick_a_ext(t_stack *stack, t_ptrs **ptr, t_list *pivot, int i)
{
	int	n_transfer;
	int	n_max;
	t_list *tmp;

	// while ((*ptr)->top && (*ptr)->bot
	// 		&& ((*ptr)->top != pivot || (*ptr)->bot != pivot))
	n_transfer = 0;
	n_max = stack->size / stack->chunks;
	tmp = stack->a;
	if (i == stack->chunks - 1)
		n_max = ft_lstsize(tmp);
	// ft_printf("Max n_transfer = %d\n", stack->size / stack->chunks);
	while (n_transfer <= n_max)
	// while (!((*ptr)->top == pivot && (*ptr)->bot == pivot))
	{
		(*ptr)->top = ft_lstlast(stack->a);
		(*ptr)->bot = stack->a;
		while ((*ptr)->top && (*ptr)->bot
				&& ((*ptr)->top != pivot || (*ptr)->bot != pivot))
		// while ((*ptr)->top && (*ptr)->bot)
		{
			// ft_printf("Coucou le while extent\n");
			// ft_printf("Top VS Pivot : %s vs %s\n", (*ptr)->top->content, pivot->content);
			// ft_printf("Bot VS Pivot : %s vs %s\n", (*ptr)->bot->content, pivot->content);
			if (ft_atoi((*ptr)->top->content) < ft_atoi(pivot->content))
			{
				// ft_printf("Passe dans le top\n");
				// st_print(stack);
				st_dig_in_a(&stack, (*ptr)->top);
				// ft_printf("Passe dans le top bis\n");
				do_pb(stack);
				break ;
			}
			else if (ft_atoi((*ptr)->bot->content) < ft_atoi(pivot->content))
			{
				// ft_printf("Passe dans le bot\n");
				st_dig_in_a(&stack, (*ptr)->bot);
				do_pb(stack);
				break ;
			}
			// else if (((*ptr)->top == pivot && !(*ptr)->bot)
			// 		|| ((*ptr)->bot == pivot && !(*ptr)->top)
			// 		|| ((*ptr)->top == pivot && (*ptr)->bot == pivot))
			if ((*ptr)->top != pivot)
				(*ptr)->top = st_grab_before(stack->a, (*ptr)->top);
			if ((*ptr)->bot != pivot)
				(*ptr)->bot = (*ptr)->bot->next;
			if ((*ptr)->top == pivot && (*ptr)->bot == pivot)
			{
				// ft_printf("Reach pivot\n");
				st_dig_in_a(&stack, pivot);
				do_pb(stack);
				// ft_printf("Pivot transfered.\n");
				return ;
			}
		}
		n_transfer++;
		// ft_printf("n_transfer = %d\n", n_transfer);
		// st_print(stack);
	}
}

void	srt_quick_a(t_stack *stack)
{
	int		i_chunks;
	int		i_pivot;
	int		n_transfer;
	t_ptrs 	*ptr;
	t_list	*lst;
	t_list	*pivot;

	i_chunks = 0;
	// i_chunks = 1;
	i_pivot = stack->size / stack->chunks;
	// i_pivot = stack->size / 2;
	ptr = malloc(sizeof(t_ptrs));
	// ft_printf("Nbr of chunks : %d\n", stack->chunks);
	while (stack->a->next && i_chunks < stack->chunks)
	// while (stack->a->next && i_chunks < 2)
	{
		// ft_printf("Coucou le while\n");
		n_transfer = 0;
		lst = stack->a;
		// stack->size = ft_lstsize(lst);
		ptr->top = ft_lstlast(lst);
		ptr->bot = lst;
		// i_pivot = (i_chunks * stack->size / stack->chunks) - 1;
		// ft_printf("i_pivot position : %d/%d\n", i_pivot, stack->size);
		// ft_printf("Pivot value : %d\n", stack->sorted[i_pivot - 1]);
		if (i_chunks == stack->chunks - 1)
		{
			// pivot = ptr->bot;
			i_pivot = stack->size;
			// ft_printf("Coucou le if\n");
		}	
		pivot = srt_find_pivot(stack, stack->sorted[i_pivot - 1]);
		// pivot = srt_find_pivot(stack, stack->sorted[i_pivot]);
		// ft_printf("Coucou le pivot : %s\n", pivot->content);
		// while (n_transfer < stack->size / stack->chunks)
		// {
		// 	srt_quick_a_extension(stack, &ptr, pivot);
		// 	n_transfer++;
		// 	ft_printf("n_transfert : %d\n", n_transfer);
		// }
		srt_quick_a_ext(stack, &ptr, pivot, i_chunks);
		i_chunks++;
		// ft_printf("CHANGE CHUNK\nChunk : %d\tPivot : %d\n", i_chunks, i_pivot);
		i_pivot += stack->size / stack->chunks;
		// i_pivot += stack->size / 2;
		// st_print(stack);
	}
	free(ptr);
}
