/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 13:56:38 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/16 16:04:45 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *str_orig;

	str_orig = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 'a' + 'A';
		str++;
	}
	return (str_orig);
}
