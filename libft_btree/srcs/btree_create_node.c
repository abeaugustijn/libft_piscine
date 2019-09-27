/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:40:50 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 14:19:06 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_btree.h>
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*res;

	res = (t_btree*)malloc(sizeof(t_btree));
	res->left = 0;
	res->right = 0;
	res->item = item;
	return (res);
}
