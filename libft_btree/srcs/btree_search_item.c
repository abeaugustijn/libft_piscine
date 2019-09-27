/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:04:37 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 14:18:48 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_btree.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*res;

	if (root->left)
	{
		res = btree_search_item(root->left, data_ref, cmpf);
		if (res)
			return (res);
	}
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	if (root->right)
	{
		res = btree_search_item(root->right, data_ref, cmpf);
		if (res)
			return (res);
	}
	if (!root)
		return (0);
	return (0);
}
