/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_elem.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 09:27:57 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 10:54:36 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*res;

	res = (t_list*)malloc(sizeof(t_list));
	res->data = data;
	res->next = NULL;
	return (res);
}
