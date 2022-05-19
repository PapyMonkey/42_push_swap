/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_penultimate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 05:54:51 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 06:34:59 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*st_penultimate(t_list *lst)
{
	int		i;
	int		size;
	t_list	*tmp;

	tmp = lst;
	size = ft_lstsize(tmp);
	if (size == 0)
		return (NULL);
	if (size == 1)
		return (tmp);
	else
	{
		i = 0;
		while (i++ < size - 2)
			tmp = tmp->next;
		return (tmp);
	}
}
