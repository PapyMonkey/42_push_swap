/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_empty_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:31:16 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 09:39:01 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_empy_a(t_stack *stack)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstsize(stack->a);
	while (i++ < len)
		do_pb(stack);
}
