/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 10:54:16 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/16 19:03:01 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int res;

	res = 0;
	while (*str != '\0')
	{
		res++;
		str++;
	}
	return (res);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_len;
	char			*dest_orig;

	dest_orig = dest;
	i = 0;
	src_len = ft_strlen(src);
	while (i < n)
	{
		if (i > src_len - 1)
			*dest = '\0';
		else
			*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest_orig);
}
