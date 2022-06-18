/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_grab_before.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 02:37:58 by aguiri            #+#    #+#             */
/*   Updated: 2022/05/20 02:40:26 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*st_grab_before(t_list *lst, t_list *pos)
{
	t_list	*out;

	out = lst;
	while (out->next != pos)
		out = out->next;
	return (out);
}
