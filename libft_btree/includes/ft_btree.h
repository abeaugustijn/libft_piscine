/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:16:18 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 15:28:56 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BTREE_H
# define LIBFT_BTREE_H

typedef	struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;
void			btree_apply_by_level(t_btree *root,
				void (*applyf)(void *item, int current_level,
				int is_first_elem));
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
t_btree			*btree_create_node(void *item);
void			btree_insert_data(t_btree **root,
				void *item, int (*cmpf)(void *, void *));
int				btree_level_count(t_btree *root);
void			*btree_search_item(t_btree *root, void *data_ref,
				int (*cmpf)(void *, void *));
void			ft_print_btree(t_btree *current, int level);

#endif
