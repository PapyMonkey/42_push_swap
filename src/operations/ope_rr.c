/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 05:33:42 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:14:15 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ope_rr(t_stack **stack)
{
	ope_ra(stack);
	ope_rb(stack);
}

void	do_rr(t_stack **stack)
{
	if (PRINT_OPE)
		ft_printf("rr\n");
	ope_rr(stack);
}
