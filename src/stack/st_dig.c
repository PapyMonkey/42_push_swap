/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_dig.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 02:49:42 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/21 03:35:06 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_dig_in_a(t_stack **stack, t_list *element)
{
	t_list	*ptr;
	int		size;
	int		i;

	ptr = (*stack)->a;
	size = ft_lstsize(ptr);
	i = 1;
	while (ptr != element)
	{
		ptr = ptr->next;
		i++;
	}
	if (i <= size / 2)
	{
		while (i != 0 && i-- > 0)
			do_rra(stack);
	}
	if (i > size / 2)
	{
		while (i != size && i++ < size)
			do_ra(stack);
	}
}

void	st_dig_in_b(t_stack **stack, t_list *element)
{
	t_list	*ptr;
	int		size;
	int		i;

	ptr = (*stack)->b;
	size = ft_lstsize(ptr);
	i = 1;
	while (ptr != element)
	{
		ptr = ptr->next;
		i++;
	}
	if (i <= size / 2)
	{
		while (i != 0 && i-- > 0)
			do_rrb(stack);
	}
	if (i > size / 2)
	{
		while (i != size && i++ < size)
			do_rb(stack);
	}
}
