/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 11:31:54 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/13 12:48:44 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_calc_sqr(int nb, int *res)
{
	*res = nb * nb;
}

int		ft_sqrt(int nb)
{
	int counter;
	int counter_sqr;

	if (nb < 0 || nb > 46340 * 46340)
		return (0);
	counter = 1;
	counter_sqr = 1;
	while (counter_sqr <= nb)
	{
		if (counter_sqr == nb)
			return (counter);
		ft_calc_sqr(++counter, &counter_sqr);
	}
	return (0);
}
