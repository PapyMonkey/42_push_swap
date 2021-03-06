/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:15:24 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/18 11:15:46 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "stack.h"

// ****************************************************************************
// Structures

/*
 * \brief		Contains ptr_beg and ptr_end, useful for the quicksort
 * 				algorithm.
 */
typedef struct s_ptrs {
	struct s_list	*top;
	struct s_list	*bot;
}					t_ptrs;

// ****************************************************************************
// Functions - Authorized operations

void	srt_insert_b(t_stack **stack);

/*
 * \brief			Check if the stack A is sorted.
 *
 * \param stack		Structure containing A & B.
 */
int		srt_is_sorted(t_stack *stack);

void	srt_quick_a(t_stack *stack);

/*
 * \brief			Sort the stack A for less than 10 numbers.
 *
 * \param stack		Structure containing A & B.
 */
void	srt_simple_sort(t_stack *stack);

/*
 * \brief			Sort the stack A when there are 3 numbers
 * 					algorithm.
 *
 * \param stack		Structure containing A & B.
 */
void	srt_three(t_stack *stack);

#endif
