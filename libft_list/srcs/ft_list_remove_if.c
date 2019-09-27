/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_remove_if.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 17:05:23 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 18:08:41 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	prev = NULL;
	curr = *begin_list;
	next = NULL;
	while (curr)
	{
		next = curr->next;
		if ((*cmp)(curr->data, data_ref))
		{
			free(curr);
			if (curr == *begin_list)
				*begin_list = next;
			if (prev)
				prev->next = next;
		}
		else
			prev = curr;
		curr = next;
	}
}
