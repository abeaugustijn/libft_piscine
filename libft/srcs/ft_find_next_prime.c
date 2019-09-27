/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 13:26:20 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/14 19:41:36 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int is_odd;

	if (nb % 2 == 1)
		is_odd = 1;
	if (nb > 2147483647)
		return (0);
	if (!is_odd)
		nb++;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
