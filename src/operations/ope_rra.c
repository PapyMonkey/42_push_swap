/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_rra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 04:36:00 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:15:30 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// stack_top		->	last of the list
// stack_bottom		->	first of the list

void	ope_rra(t_stack **stack)
{
	t_list	*stack_bottom;
	t_list	*stack_top;

	if (!(*stack)->a)
		return ;
	stack_bottom = (*stack)->a;
	stack_top = ft_lstlast(stack_bottom);
	stack_top->next = stack_bottom;
	(*stack)->a = stack_bottom->next;
	stack_bottom->next = NULL;
}

void	do_rra(t_stack **stack)
{
	if (PRINT_OPE)
		ft_printf("rra\n");
	ope_rra(stack);
}
