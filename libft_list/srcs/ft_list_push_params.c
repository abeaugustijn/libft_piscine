/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 12:05:14 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/25 20:19:59 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*to_add;

	to_add = ft_create_elem(data);
	to_add->next = *begin_list;
	*begin_list = to_add;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*res;
	int		i;

	i = 2;
	res = NULL;
	if (ac > 1)
		res = ft_create_elem(av[1]);
	while (i < ac)
	{
		ft_list_push_front(&res, av[i]);
		i++;
	}
	return (res);
}
