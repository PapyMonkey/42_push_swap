/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:36:49 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 08:57:35 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	err_isnum(char *str)
{
	if (*str == '-')
		str++;
	while (*str)	
	{
		if (!ft_isdigit(*str))
		{
			ft_printf("Error\n");
			exit (EXIT_FAILURE);
		}
		str++;
	}
}

static void	err_isint(char *str)
{
	int	nb;

	nb = ft_atoi(str);
	ft_printf("Number : %d\n", nb);
	if (nb < INT_MIN || nb > INT_MAX)
	{
		ft_printf("Error\n");
		exit (EXIT_FAILURE);
	}
}

static int	*err_gen_array(int argc, char **argv)
{
	int	*out;
	int	i;

	out = malloc(sizeof(int) * (argc - 1));
	// out[argc] = '\0';
	if (!out)
		return (NULL);
	i = 0;
	while (i + 1 < argc)
	{
		out[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (out);
}

static void	err_isdup(int *arr, int i, int argc)
{
	int	buffer;

	buffer = arr[i++];
	while (i + 1 < argc)
	{
		if (arr[i] == buffer)
		{
			ft_printf("Error\n");
			exit (EXIT_FAILURE);
		}
		i++;
	}
}

void	err_args(int argc, char **argv)
{
	int	*array;
	int	i;

	if (argc == 1)
		exit (EXIT_FAILURE);
	array = err_gen_array(argc, argv);
	i = 1;
	while (i < argc)
	{
		err_isnum(argv[i]);
		// err_isint(argv[i]);
		// if (i + 1 < argc && ft_strncmp)
		err_isdup(array, i - 1, argc);
		i++;
	}
	free(array);
}
