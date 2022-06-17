/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:36:49 by aguiri            #+#    #+#             */
/*   Updated: 2022/06/17 13:08:53 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err_isnum(char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
		{
			ft_putstr_fd("Error\n", 2);
			exit (EXIT_FAILURE);
		}
		str++;
	}
}

void	err_isint(char *str)
{
	if (ft_strncmp(str, "-2147483648", 11) > 0
		|| ft_strncmp(str, "2147483647", 10) < 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit (EXIT_FAILURE);
	}
}

static int	*err_gen_array(int argc, char **argv)
{
	int	*out;
	int	i;

	out = malloc(sizeof(int) * (argc - 1));
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

void	err_isdup(int *arr, int i, int argc)
{
	int	buffer;

	buffer = arr[i++];
	while (i + 1 < argc)
	{
		if (arr[i] == buffer)
		{
			ft_putstr_fd("Error\n", 2);
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
	{
		ft_putstr_fd("Error\n", 2);
		exit (EXIT_FAILURE);
	}
	array = err_gen_array(argc, argv);
	i = 1;
	while (i < argc)
	{
		err_isnum(argv[i]);
		err_isint(argv[i]);
		err_isdup(array, i - 1, argc);
		i++;
	}
	free(array);
}
