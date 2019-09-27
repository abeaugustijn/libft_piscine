/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_at.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 14:06:04 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/24 14:42:06 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*cur;
	unsigned int	i;

	i = 0;
	cur = begin_list;
	while (i < nbr)
	{
		cur = cur->next;
		if (!cur)
			return (0);
		i++;
	}
	return (cur);
}
