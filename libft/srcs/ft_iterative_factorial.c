/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 09:07:01 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/14 14:39:04 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
