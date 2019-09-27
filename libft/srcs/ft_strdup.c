/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 08:59:04 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/18 09:20:27 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int res;

	res = 0;
	while (*str)
	{
		res++;
		str++;
	}
	return (res);
}

char	*ft_strdup(char *src)
{
	char	*new_ptr;
	char	*cur_ptr;

	new_ptr = malloc(ft_strlen(src) + 1);
	cur_ptr = new_ptr;
	while (*src)
	{
		*cur_ptr = *src;
		cur_ptr++;
		src++;
	}
	*cur_ptr = '\0';
	return (new_ptr);
}
