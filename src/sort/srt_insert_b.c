/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srt_insert_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:00:38 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/21 02:57:31 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	srt_insert_b(t_stack **stack)
{
	t_list	*greater;
	t_list	*ptr;

	// ft_printf("Coucou le dans insert\n");
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
		st_dig_in_b(stack, greater);
		do_pa(*stack);
	}
}
