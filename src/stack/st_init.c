/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:45:01 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 00:22:41 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void st_get_args(t_stack *stacks, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		ft_lstadd_front(&stacks->A, ft_lstnew(argv[i++]));
}

t_stack *st_init(int argc, char **argv)
{
	t_stack	*out;

	out->A = NULL;
	out->B = NULL;
	st_get_args(out, argc, argv);
	// st_pretty_print(out->A);
	return (out);
}
