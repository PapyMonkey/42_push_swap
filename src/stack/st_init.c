/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:45:01 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/16 15:41:03 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	cursor;
	int	minimum;
	int	tmp;

	cursor = 0;
	while (cursor < size)
	{
		n = cursor;
		minimum = tab[cursor];
		while (n < size)
		{
			if (tab[n] <= minimum)
			{
				minimum = tab[n];
				tmp = tab[cursor];
				tab[cursor] = tab[n];
				tab[n] = tmp;
			}
			n++;
		}
		cursor++;
	}
}

static void	st_sort_off(t_stack *stack, char **argv)
{
	int	i;

	stack->sorted = malloc(sizeof(int) * stack->size);
	if (!stack->sorted)
	{
		ft_putstr_fd("Error : malloc() failed\n", 2);
		exit (EXIT_FAILURE);
	}
	i = 0;
	while (i < stack->size)
	{
		stack->sorted[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_sort_int_tab(stack->sorted, stack->size);
}

static void	st_get_args(t_stack *stack, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		ft_lstadd_front(&stack->a, ft_lstnew(argv[i++]));
}

t_stack	*st_init(int argc, char **argv)
{
	t_stack	*out;

	out = malloc(sizeof(t_stack));
	out->a = NULL;
	out->b = NULL;
	out->sorted = NULL;
	out->size = argc - 1;
	if (out->size > 10 && out->size <= 100)
		out->chunks = 4;
	else if (out->size > 100)
		out->chunks = 8;
	else
		out->chunks = 1;
	st_get_args(out, argc, argv);
	st_sort_off(out, argv);
	return (out);
}
