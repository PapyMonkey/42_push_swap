/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_rem_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:53:49 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/19 06:38:18 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_rem_last(t_list **lst)
{
	int		i;
	int		size;
	t_list	*tmp;

	i = 0;
	tmp = *lst;
	size = ft_lstsize(tmp);
	if (size == 0)
		return ;
	if (size == 1)
		*lst = NULL;
	else if (size >= 2)
	{
		while (i++ < size - 2)
			tmp = tmp->next;
		tmp->next = NULL;
	}
}

// Old version

// void st_rem_last(t_list *lst)
// {
// 	int	i;
// 	int	size;
//
// 	i = 0;
// 	size = ft_lstsize(lst);
// 	ft_printf("size = %d\n", size);
// 	// if (size <= 1)
// 	// {
// 	// 	lst = NULL;
// 	// 	return ;
// 	// }
// 	while (i < size - 2 )
// 	{
// 		lst = lst->next;
// 		i++;
// 	}
// 	lst->next = NULL;
// }
