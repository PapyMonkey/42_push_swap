/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:45:01 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/17 15:35:45 by aguiri           ###   ########.fr       */
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

static void	st_sort_off(t_stack *stack, char **tab, const int start)
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
		stack->sorted[i] = ft_atoi(tab[start + i]);
		i++;
	}
	ft_sort_int_tab(stack->sorted, stack->size);
}

static void	st_get_args(t_stack *stack, int argc, char **argv)
{
	int		i;

	err_args(argc, argv);
	i = 1;
	while (i < argc)
		ft_lstadd_front(&stack->a, ft_lstnew(argv[i++]));
	stack->size = argc - 1;
	st_sort_off(stack, argv, 1);
}

static void	st_get_args_splitted(t_stack *stack, int argc, char **argv)
{
	int		len;
	int		i;
	int		*buff;
	char	**splitted;

	splitted = ft_split(argv[1], ' ');
	len = 0;
	while (splitted[len] != NULL)
		len++;
	buff = malloc(sizeof(int) * len);
	i = -1;
	while (++i < len)
		buff[i] = ft_atoi(splitted[i]);
	i = -1;
	while (++i < len)
	{
		err_isnum(splitted[i]);
		err_isint(splitted[i]);
		err_isdup(buff, i - 1, len);
		ft_lstadd_front(&stack->a, ft_lstnew(splitted[i]));
	}
	free(buff);
	stack->size = i;
	st_sort_off(stack, splitted, 0);
	free(splitted);
}

t_stack	*st_init(int argc, char **argv)
{
	t_stack	*out;

	out = malloc(sizeof(t_stack));
	out->a = NULL;
	out->b = NULL;
	out->sorted = NULL;
	if (argc == 2)
		st_get_args_splitted(out, argc, argv);
	else
		st_get_args(out, argc, argv);
	if (out->size > 10 && out->size <= 100)
		out->chunks = 4;
	else if (out->size > 100)
		out->chunks = 8;
	else
		out->chunks = 1;
	return (out);
}
