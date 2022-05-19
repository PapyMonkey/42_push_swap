/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_sa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 05:40:40 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:18:08 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ope_sa(t_stack *stack)
{
	t_list	*stack_top;
	t_list	*stack_top_1;
	t_list	*stack_top_2;
	int		size;

	size = ft_lstsize(stack->a);
	if (size < 2)
		return ;
	else if (size == 2)
		ope_ra(&stack);
	else
	{
		stack_top = ft_lstlast(stack->a);
		stack_top_1 = st_penultimate(stack->a);
		stack_top_1->next = NULL;
		stack_top_2 = st_penultimate(stack->a);
		stack_top_2->next = stack_top;
		stack_top->next = stack_top_1;
	}
}

void	do_sa(t_stack *stack)
{
	if (PRINT_OPE)
		ft_printf("sa\n");
	ope_sa(stack);
}
