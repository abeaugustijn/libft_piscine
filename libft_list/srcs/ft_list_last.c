/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_last.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 11:46:23 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 11:52:06 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next != 0)
		begin_list = begin_list->next;
	return (begin_list);
}
