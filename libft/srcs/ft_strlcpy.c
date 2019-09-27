/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 20:14:44 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/16 20:30:53 by aaugusti      ########   odam.nl         */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int total_size;
	unsigned int i;

	total_size = ft_strlen(src);
	i = 0;
	while (*src && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (total_size);
}
