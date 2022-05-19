/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:29:51 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 06:39:42 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	st_rev_print(t_list *lst_a, t_list *lst_b)
{
	if (lst_a && lst_b)
	{
		st_rev_print(lst_a->next, lst_b->next);
		ft_printf("\t%s\t|\t%s\n", lst_a->content, lst_b->content);
	}
	else if (lst_a && !lst_b)
	{
		st_rev_print(lst_a->next, NULL);
		ft_printf("\t%s\t|\t\n", lst_a->content);
	}
	else if (!lst_a && lst_b)
	{
		st_rev_print(NULL, lst_b->next);
		ft_printf("\t\t|\t%s\n", lst_b->content);
	}
}

void	st_print(t_stack *stack)
{
	st_rev_print(stack->a, stack->b);
	ft_printf("----------------+----------------\n\tA\t|\tB\n");
}
