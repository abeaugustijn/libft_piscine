/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 08:11:43 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 14:18:53 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_btree.h>

int		btree_level_count(t_btree *root)
{
	int		left;
	int		right;

	if (!root)
		return (-1);
	right = 1 + btree_level_count(root->right);
	left = 1 + btree_level_count(root->left);
	return (left > right ? left : right);
}
