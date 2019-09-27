/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 09:14:41 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/14 16:18:45 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
