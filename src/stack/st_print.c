/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:29:51 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 03:17:54 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void st_rev_print(t_list *lst_A, t_list *lst_B)
{
	if (lst_A && lst_B)
	{
		st_rev_print(lst_A->next, lst_B->next);
		ft_printf("\t%s\t|\t%s\n", lst_A->content, lst_B->content);
	}
	else if (lst_A && !lst_B)
	{
		st_rev_print(lst_A->next, NULL);
		ft_printf("\t%s\t|\t\n", lst_A->content);
	}
	else if (!lst_A && lst_B)
	{
		st_rev_print(lst_B->next, NULL);
		ft_printf("\t\t|\t%s\n", lst_B->content);
	}
}

void st_print(t_stack *stack)
{
	// ft_putchar_fd('\n', 1);
	st_rev_print(stack->A, stack->B);
	ft_printf("----------------+----------------\n\tA\t|\tB\n");
}
