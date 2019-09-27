/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 11:23:27 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 11:26:13 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int res;

	res = 0;
	while (begin_list)
	{
		res++;
		begin_list = begin_list->next;
	}
	return (res);
}
