/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:41:32 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 10:41:06 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft.h"

// ****************************************************************************
// Structures

/*
 * \brief		Contains stack A and stack B.
 */
typedef struct s_stack {
	struct s_list	*a;
	struct s_list	*b;
}					t_stack;

// ****************************************************************************
// Functions - Stack manipulations

// void	st_free(t_stack *stack);

void	st_empy_a(t_stack *stack);

/*
 * \brief			Initialize both stacks thanks to the main's arguments and
 * 					return a pointer to the structure containing the two lists.
 *
 * \param argc		Number of the main arguments.
 * \param argv		Table of string containing the arguments.
 * \return			Pointer to the stack structure.
 */
t_stack	*st_init(int argc, char **argv);

/*
 * \brief			Grab the list's penultimate element and return it.	
 *
 * \param lst		First element of the list's address. 
 * \return			Pointer to the penultimate element.
 */
t_list	*st_penultimate(t_list *lst);

/*
 * \brief			Print both stacks on standard output.
 *
 * \param stack		Structure containing A & B.
 */
void	st_print(t_stack *stack);

/*
 * \brief			Grab the list's last element and remove it.	
 *
 * \param lst		First element of the list's address. 
 */
void	st_rem_last(t_list **lst);

void	st_sort_b(t_stack **stack);

#endif
