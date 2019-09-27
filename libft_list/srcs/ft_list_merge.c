/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_merge.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 18:32:36 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 19:59:46 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	tmp = *begin_list1;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = begin_list2;
}
