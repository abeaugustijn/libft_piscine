/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:23:20 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/25 20:23:51 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next;
	t_list	*tmp;

	next = *begin_list;
	while (next)
	{
		tmp = next->next;
		free(next);
		next = tmp;
	}
	*begin_list = 0;
}
