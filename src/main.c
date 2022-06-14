/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:15:45 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/13 23:58:01 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	foo(void *arg)
{
	(void)arg;
}

static void	st_print_old(t_stack *stack)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = stack->a;
	lst_b = stack->b;
	ft_printf("STACK A :\n");
	while (lst_a)
	{
		ft_printf("%s\n", lst_a->content);
		lst_a = lst_a->next;
	}
	ft_printf("STACK B :\n");
	while (lst_b)
	{
		ft_printf("%s\n", lst_b->content);
		lst_b = lst_b->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	err_args(argc, argv);
	stack = st_init(argc, argv);
	srt_quick_a(stack);
	srt_insert_b(&stack);
	ft_lstclear(&(stack->a), foo);
	ft_lstclear(&(stack->b), foo);
	free(stack->sorted);
	free(stack);
	return (EXIT_SUCCESS);
}
