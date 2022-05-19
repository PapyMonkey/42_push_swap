/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:19:00 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 07:29:08 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "stack.h"

// ****************************************************************************
// Functions - Authorized operations

/*
 * \brief			Push a : take the first element at the top of b and put it
 * 					at the top of a. Do nothing if b is empty.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_pa(t_stack *stack);
void	do_pa(t_stack *stack);

/*
 * \brief			Push b : take the first element at the top of a and put it
 * 					at the top of b. Do nothing if a is empty.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_pb(t_stack *stack);
void	do_pb(t_stack *stack);

/*
 * \brief			Rotate a : shift up all elements of stack a by 1.
 * 					The first element becomes the last one.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_ra(t_stack **stack);
void	do_ra(t_stack **stack);

/*
 * \brief			Rotate b : shift up all elements of stack b by 1.
 * 					The first element becomes the last one.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_rb(t_stack **stack);
void	do_rb(t_stack **stack);

/*
 * \brief			ra and rb at the same time.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_rr(t_stack **stack);
void	do_rr(t_stack **stack);

/*
 * \brief			Reverse rotate a : shift up all elements of stack a by 1.
 * 					The last element becomes the first one.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_rra(t_stack **stack);
void	do_rra(t_stack **stack);

/*
 * \brief			Reverse rotate b : shift up all elements of stack b by 1.
 * 					The last element becomes the first one.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_rrb(t_stack **stack);
void	do_rrb(t_stack **stack);

/*
 * \brief			rra and rrb at the same time.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_rrr(t_stack **stack);
void	do_rrr(t_stack **stack);

/*
 * \brief			Swap a : Swap the first 2 elements at the top of stack a.
 * 					Do nothing if there is only one or no elements.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_sa(t_stack *stack);
void	do_sa(t_stack *stack);

/*
 * \brief			Swap b : Swap the first 2 elements at the top of stack b.
 * 					Do nothing if there is only one or no elements.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_sb(t_stack *stack);
void	do_sb(t_stack *stack);

/*
 * \brief			sa and sb at the same time.
 *
 * \param stack		Structure containing a & b.
 */
void	ope_ss(t_stack *stack);
void	do_ss(t_stack *stack);

#endif
