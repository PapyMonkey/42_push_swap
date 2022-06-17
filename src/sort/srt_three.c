/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srt_three.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:53:59 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/16 18:54:21 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else if (a < b && b > c)
	{
		do_sa(stack);
		do_ra(&stack);
	}
	else if (a < b && b > c)
		do_rra(&stack);
}
