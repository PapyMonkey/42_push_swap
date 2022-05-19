/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:17:49 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 10:48:10 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>

# include "libft.h"

# include "operations.h"
# include "stack.h"

# define PRINT_OPE 1

/*
 * \brief			Check if the values and the number of parameters is correct.
 *					Return "Error\n" on the standard output if something is
 *					wrong.
 *
 * \param argc		Number of the main arguments.
 * \param argv		Table of string containing the arguments.
 */
void	err_args(int argc, char **argv);

#endif
