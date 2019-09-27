/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 10:57:06 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 11:10:16 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*to_add;
	t_list	*last_elem;

	to_add = ft_create_elem(data);
	last_elem = *begin_list;
	while (last_elem->next != 0)
		last_elem = last_elem->next;
	last_elem->next = to_add;
}
