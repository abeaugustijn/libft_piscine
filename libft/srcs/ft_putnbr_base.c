/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 10:52:47 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/17 21:25:55 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int res;

	res = 0;
	while (*str)
	{
		res++;
		str++;
	}
	return (res);
}

int		ft_num_length(int nbr, char *base)
{
	int res;
	int n_base;

	n_base = ft_strlen(base);
	res = 1;
	while (nbr > 0)
	{
		nbr = (nbr - nbr % n_base) / n_base;
		res++;
	}
	return (res);
}

void	ft_putstr_rev(char *str, int is_neg)
{
	char	*back_p;
	int		str_len;

	if (is_neg)
	{
		ft_putchar('-');
	}
	str_len = ft_strlen(str);
	back_p = str + (str_len - 1) * sizeof(char);
	while (back_p >= str)
	{
		ft_putchar(*back_p);
		back_p--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n_base;
	int		to_put;
	int		i;
	int		is_neg;
	char	res[ft_num_length(nbr, base) + 1];

	n_base = ft_strlen(base);
	i = 0;
	if (n_base < 2)
		return ;
	is_neg = nbr < 0;
	if (is_neg)
		nbr *= -1;
	while (nbr > 0)
	{
		to_put = nbr % n_base;
		nbr = (nbr - to_put) / n_base;
		res[i] = *(base + to_put);
		i++;
	}
	res[i] = '\0';
	ft_putstr_rev(res, is_neg);
}
