/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:00:38 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 13:34:42 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	st_dig_greater(t_stack **stack, t_list *greater)
{
	t_list	*ptr;
	int		size;
	int		i;
	
	ptr = (*stack)->b;
	size = ft_lstsize(ptr);
	i = 1;
	// while (ptr != greater)
	while (ft_atoi(greater->content) != ft_atoi(ptr->content))
	{
		// ft_printf("Pointing to -> %s (i = %d)\n", ptr->content, i);
		// ft_printf("Pointing to -> %s (stack->b)\n", (*stack)->b->content);
		ptr = ptr->next;
		i++;
	}
	// ft_printf("Greater choisi : %s\tPosition : %d/%d\n", greater->content, i, size);
	// st_print(*stack);
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
	do_pa(*stack);
	// ft_printf("Et de un.\n");
	// st_print(*stack);
}

// static void	st_find_greater(t_stack *stack)
// {
// 	t_list	*greater;
// 	t_list	*ptr;
// 	
// 	greater = stack->b;
// 	ptr = stack->b;
// 	while (ptr)
// 	{
// 		if (ft_atoi(greater->content) - ft_atoi(ptr->content) < 0)
// 			greater = ptr;
// 		ptr = ptr->next;
// 	}
// 	st_dig_greater(&stack, greater);
// }

void	st_sort_b(t_stack **stack)
{
	t_list	*greater;
	t_list	*ptr;

	while ((*stack)->b)
	{
		greater = (*stack)->b;
		ptr = (*stack)->b;
		while (ptr)
		{
			if (ft_atoi(greater->content) < ft_atoi(ptr->content))
				greater = ptr;
			ptr = ptr->next;
		}
		// ft_printf("Pointing to -> %s (stack->b in main)\n", (*stack)->b->content);
		st_dig_greater(stack, greater);
	}
}
