/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 17:41:25 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/17 20:49:29 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*pt;

	pt = dest;
	while (*pt)
		pt++;
	while (*src)
	{
		*pt = *src;
		pt++;
		src++;
	}
	*pt = '\0';
	return (dest);
}
