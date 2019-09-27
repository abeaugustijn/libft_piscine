/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 16:39:33 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 16:42:15 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
