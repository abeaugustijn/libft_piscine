/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:22:57 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 14:19:00 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_btree.h>

void	btree_insert_data(t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	if (!root)
		return ;
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else
		btree_insert_data(&((*root)->right), item, cmpf);
}
