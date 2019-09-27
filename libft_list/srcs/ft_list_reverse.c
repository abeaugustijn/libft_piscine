/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_reverse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 15:37:04 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 16:38:19 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	prev = 0;
	curr = *begin_list;
	next = 0;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
}
