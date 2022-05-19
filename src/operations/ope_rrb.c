/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 04:36:00 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:16:30 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// stack_top		->	last of the list
// stack_bottom		->	first of the list

void	ope_rrb(t_stack **stack)
{
	t_list	*stack_bottom;
	t_list	*stack_top;

	if (!(*stack)->b)
		return ;
	stack_bottom = (*stack)->b;
	stack_top = ft_lstlast(stack_bottom);
	stack_top->next = stack_bottom;
	(*stack)->b = stack_bottom->next;
	stack_bottom->next = NULL;
}

void	do_rrb(t_stack **stack)
{
	if (PRINT_OPE)
		ft_printf("rrb\n");
	ope_rrb(stack);
}
