/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_rrr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 05:33:42 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:17:04 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ope_rrr(t_stack **stack)
{
	ope_rra(stack);
	ope_rrb(stack);
}

void	do_rrr(t_stack **stack)
{
	if (PRINT_OPE)
		ft_printf("rrr\n");
	ope_rrr(stack);
}
