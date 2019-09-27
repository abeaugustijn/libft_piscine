/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 12:13:56 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/12 12:20:44 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int res;

	res = 0;
	while (*str != 0)
	{
		res++;
		str += sizeof(char);
	}
	return (res);
}
