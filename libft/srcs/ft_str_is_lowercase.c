/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 16:02:36 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/16 16:05:54 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
