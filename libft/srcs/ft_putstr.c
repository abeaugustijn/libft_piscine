/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 12:08:38 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/12 12:12:04 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str += sizeof(char);
	}
}
