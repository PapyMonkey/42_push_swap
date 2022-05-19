/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_pa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:21:31 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:10:41 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ope_pa(t_stack *stack)
{
	t_list	*last_element_b;

	if (stack->b == NULL)
		return ;
	last_element_b = ft_lstlast(stack->b);
	ft_lstadd_back(&stack->a, last_element_b);
	st_rem_last(&stack->b);
}

void	do_pa(t_stack *stack)
{
	if (PRINT_OPE)
		ft_printf("pa\n");
	ope_pa(stack);
}
