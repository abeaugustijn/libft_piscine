/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 19:49:56 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/16 20:11:26 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int res;

	res = 0;
	while (*(str++))
	{
		res++;
	}
	return (res);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*pt;
	unsigned int	i;
	unsigned int	total_size;

	total_size = ft_strlen(dest) + ft_strlen(src);
	pt = dest;
	while (*pt)
	{
		pt++;
	}
	i = 0;
	while (*src && i < size)
	{
		*pt = *src;
		pt++;
		src++;
		i++;
	}
	*(--pt) = '\0';
	return (total_size);
}
