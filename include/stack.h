/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:41:32 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 00:04:15 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft.h"

// ****************************************************************************
// Structures

/**
 * \brief		Contains stack A and stack B.
 */
typedef struct s_stack {
	struct s_list	*A;
	struct s_list	*B;
}					t_stack;

// ****************************************************************************
// Functions - Stack manipulations

void	st_get_args(t_stack *stacks, int argc, char **argv);

t_stack *st_init(int argc, char **argv);

void	st_pretty_print(t_list *lst);

#endif
