/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 08:26:06 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 14:19:26 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int		get_max_nodes(int level)
{
	int		res;
	int		i;

	res = 1;
	i = 0;
	while (i < level)
	{
		res *= 2;
		i++;
	}
	return (res);
}

void	call_functions(int i, t_btree ***current_nodes,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int		max_nodes;
	int		j;
	int		first_counter;

	max_nodes = get_max_nodes(i);
	j = 0;
	first_counter = 0;
	while (j < max_nodes)
	{
		if (current_nodes[0][j])
			applyf(current_nodes[0][j]->item, i, j == first_counter);
		else
			first_counter++;
		j++;
	}
}

void	add_next_nodes(t_btree ***current_nodes, t_btree ***previous_nodes,
		int i)
{
	int		j;

	j = 0;
	while (j < get_max_nodes(i))
	{
		if (previous_nodes[0][j])
		{
			if (previous_nodes[0][j]->left)
				current_nodes[0][2 * j + 1] = previous_nodes[0][j]->left;
			if (previous_nodes[0][j]->right)
				current_nodes[0][2 * j] = previous_nodes[0][j]->right;
		}
		j++;
	}
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int		i;
	t_btree	**current_nodes;
	t_btree	**previous_nodes;

	current_nodes = (t_btree**)malloc(sizeof(t_btree*));
	current_nodes[0] = root;
	i = 0;
	while (i < btree_level_count(root) + 1)
	{
		call_functions(i, &current_nodes, applyf);
		previous_nodes = current_nodes;
		current_nodes = (t_btree**)malloc(get_max_nodes(i + 1) *
				sizeof(t_btree*));
		add_next_nodes(&current_nodes, &previous_nodes, i);
		free(previous_nodes);
		i++;
	}
}
