/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_ss.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 06:47:57 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:20:00 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ope_ss(t_stack *stack)
{
	ope_sa(stack);
	ope_sb(stack);
}

void	do_ss(t_stack *stack)
{
	if (PRINT_OPE)
		ft_printf("ss\n");
	ope_ss(stack);
}
