/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_interative_power.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 10:19:53 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/13 10:28:52 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	res = 1;
	while (--power >= 0)
	{
		res *= nb;
	}
	return (res);
}
