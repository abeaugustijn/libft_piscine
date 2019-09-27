/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:31:41 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 15:28:00 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
t_list			*ft_create_elem(void *data);
t_list			*ft_list_at(t_list *begin_list, unsigned int nbr);
void			ft_list_clear(t_list **begin_list);
t_list			*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
				void *data_ref, int (*cmp)(void *, void *));
t_list			*ft_list_last(t_list *begin_list);
void			ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void			ft_list_push_back(t_list **begin_list, void *data);
void			ft_list_push_front(t_list **begin_list, void *data);
t_list			*ft_list_push_params(int ac, char **av);
void			ft_list_remove_if(t_list **begin_list, void *data_ref,
				int (*cmp)());
void			ft_list_reverse(t_list **begin_list);
int				ft_list_size(t_list *begin_list);

#endif
