/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srt_core.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:21:00 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/18 11:12:52 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	srt_is_sorted(t_stack *stack)
{
	t_list	*tmp;

	tmp = stack->a;
	while (tmp->next)
	{
		if (ft_atoi(tmp->content) < ft_atoi(tmp->next->content))
			return (EXIT_FAILURE);
		tmp = tmp->next;
	}
	return (EXIT_SUCCESS);
}

void	srt_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = ft_atoi(stack->a->next->next->content);
	b = ft_atoi(stack->a->next->content);
	c = ft_atoi(stack->a->content);
	if (a > b && a < c)
		do_sa(stack);
	else if (a > b && b > c)
	{
		do_sa(stack);
		do_rra(&stack);
	}
	else if (a > b && a > c)
		do_ra(&stack);
	else if (a < b && a < c)
	{
		do_sa(stack);
		do_ra(&stack);
	}
	else if (a < b && a > c)
		do_rra(&stack);
}

void	srt_simple_sort(t_stack *stack)
{
	int		i;
	t_list	*minimum;
	t_list	*ptr;

	i = -1;
	while (++i < stack->size - 3)
	{
		minimum = stack->a;
		ptr = stack->a;
		while (ptr)
		{
			if (ft_atoi(minimum->content) > ft_atoi(ptr->content))
				minimum = ptr;
			ptr = ptr->next;
		}
		st_dig_in_a(&stack, minimum);
		do_pb(stack);
	}
	if (srt_is_sorted(stack) == EXIT_FAILURE)
		srt_three(stack);
	srt_insert_b(&stack);
}
