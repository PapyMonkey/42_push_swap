/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:15:45 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/21 06:47:10 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stack.h"

static void	foo(void *arg)
{
	(void)arg;
}

static void st_print_old(t_stack *stack)
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

	// Test du sort
	// int i;
	// i = 0;
	// while (i < stack->size)
	// 	ft_printf("%d\n", stack->sorted[i++]);

	// st_print(stack);
	// st_empy_a(stack);
	srt_quick_a(stack);
	// ft_printf("Coucou le debut toute fin\n");
	// st_print(stack);

	// ft_printf("\nAPRES L'OPE\n");
	srt_insert_b(&stack);
	// ft_printf("Coucou le debut toute fin\n");
	// st_print(stack);

	// ----------------------

	// Test de toutes les operations :
	
	// do_pa(stack);
	// do_pb(stack);
	// do_ra(&stack);
	// do_rb(&stack);
	// do_rr(&stack);
	// do_rra(&stack);
	// do_rrb(&stack);
	// do_rrr(&stack);
	// do_sa(stack);
	// do_sb(stack);
	// do_ss(stack);

	// ----------------------
	
	ft_lstclear(&(stack->a), foo);
	ft_lstclear(&(stack->b), foo);
	free(stack->sorted);
	free(stack);

	return (EXIT_SUCCESS);
}
