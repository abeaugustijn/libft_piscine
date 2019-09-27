/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_whitespaces.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 16:33:41 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/19 12:20:52 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		ft_strlen(char *str)
{
	int res;

	res = 0;
	while (!ft_is_whitespace(*str) && *str)
	{
		res++;
		str++;
	}
	return (res);
}

void	abe_strcpy(char *src, char *dest)
{
	while (!ft_is_whitespace(*src))
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	**ft_get_ptr_mem(char *str)
{
	int		size;
	char	*pt;
	char	**res;

	pt = str;
	size = 0;
	if (!ft_is_whitespace(*pt))
		size++;
	pt++;
	while (*pt)
	{
		if (!ft_is_whitespace(*pt) && ft_is_whitespace(*(pt - 1)))
			size++;
		pt++;
	}
	res = (char **)malloc((size + 1) * sizeof(char *));
	return (res);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	char	**res_cpy;
	int		i;

	res = ft_get_ptr_mem(str);
	res_cpy = res;
	i = 0;
	while (*str)
	{
		while (ft_is_whitespace(*str))
			str++;
		res[i] = malloc(ft_strlen(str) + 1);
		abe_strcpy(str, res[i]);
		str += ft_strlen(str);
		i++;
	}
	res[i - 1] = NULL;
	return (res_cpy);
}
