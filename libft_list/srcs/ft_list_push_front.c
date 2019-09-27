/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 11:16:11 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/25 19:57:52 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*to_add;

	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	to_add = ft_create_elem(data);
	to_add->next = *begin_list;
	*begin_list = to_add;
}
