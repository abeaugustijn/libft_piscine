/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 17:49:39 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/27 15:21:10 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*pt;
	int		i;

	pt = dest;
	i = 0;
	while (*pt && i < nb)
	{
		pt++;
		i++;
	}
	while (*src && i < nb)
	{
		*pt = *src;
		pt++;
		src++;
		i++;
	}
	*pt = '\0';
	return (dest);
}
