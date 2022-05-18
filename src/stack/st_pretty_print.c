/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_pretty_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:04:04 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/18 23:10:37 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void st_pretty_print(t_list *lst)
{
	while (lst != NULL)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
}
