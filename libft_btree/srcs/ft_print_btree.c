/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_btree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:38:26 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 14:18:37 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_btree.h>
#include <stdio.h>
#include <unistd.h>

void	print_whitespace(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, "\t", 1);
		i++;
	}
}

void	ft_print_btree(t_btree *current, int level)
{
	if (current == NULL)
		return ;
	if (current->right != 0)
		ft_print_btree(current->right, level + 1);
	print_whitespace(level);
	if (current->item != 0)
		printf("%d\n", *((int*)current->item));
	if (current->left != 0)
		ft_print_btree(current->left, level + 1);
}
