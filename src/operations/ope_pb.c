/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_pb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:21:31 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:22 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ope_pb(t_stack *stack)
{
	t_list	*last_element_a;

	if (stack->a == NULL)
		return ;
	last_element_a = ft_lstlast(stack->a);
	ft_lstadd_back(&stack->b, last_element_a);
	st_rem_last(&stack->a);
}

void	do_pb(t_stack *stack)
{
	if (PRINT_OPE)
		ft_printf("pb\n");
	ope_pb(stack);
}
