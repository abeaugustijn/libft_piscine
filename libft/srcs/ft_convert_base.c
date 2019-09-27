/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 13:51:30 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/19 17:10:10 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_index_in_base(char *base, char c)
{
	int i;

	i = 0;
	while (*base != c && *base)
	{
		base++;
		i++;
	}
	if (*base == c)
		return (i);
	return (-1);
}

int		ft_strlen(char *str)
{
	int res;

	res = 0;
	while (*str)
	{
		str++;
		res++;
	}
	return (res);
}

int		ft_convert_to_int(char *nbr, char *base)
{
	int n_base;
	int	is_neg;
	int res;

	is_neg = *nbr == '-';
	if (is_neg)
		nbr++;
	res = 0;
	n_base = ft_strlen(base);
	while (*nbr)
	{
		res *= n_base;
		res += ft_get_index_in_base(base, *nbr);
		nbr++;
	}
	return (is_neg ? (res * -1) : res);
}

char	*ft_convert_to_base(int nbr, char *base)
{
	int		n_base;
	char	*res;
	int		dec_to_put;
	int		is_neg;

	is_neg = nbr < 0;
	if (is_neg)
		nbr *= -1;
	n_base = ft_strlen(base);
	res = (char *)malloc(34 * sizeof(char));
	res += 34 * sizeof(char);
	*res = '\0';
	res--;
	while (nbr > 0)
	{
		dec_to_put = nbr % n_base;
		nbr = (nbr - dec_to_put) / n_base;
		*res = base[dec_to_put];
		res--;
	}
	if (is_neg)
		*res = '-';
	return (is_neg ? res : res + sizeof(char));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		dec;

	
	dec = ft_convert_to_int(nbr, base_from);
	res = ft_convert_to_base(dec, base_to);
	return (res);
}
