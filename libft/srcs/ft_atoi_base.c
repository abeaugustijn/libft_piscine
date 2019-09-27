/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 14:11:58 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/27 15:23:27 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int res;

	res = 0;
	while (*str != '\0')
	{
		res++;
		str++;
	}
	return (res);
}

int		ft_contains_the_same_char(char *str)
{
	int		i;
	int		j;
	int		str_len;
	char	cur_char;

	str_len = ft_strlen(str);
	i = 0;
	while (i < str_len)
	{
		cur_char = str[i];
		j = i + 1;
		while (j < str_len)
		{
			if (str[j] == cur_char)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check_exceptions(char **str, int *is_neg, char *base)
{
	if (**str == ' ' || **str == '\t' || **str == '+')
		(*str)++;
	if (**str == '-')
	{
		*is_neg = 1;
		(*str)++;
	}
	if (ft_strlen(*str) < 2)
		return (1);
	if (ft_contains_the_same_char(base))
		return (1);
	return (0);
}

int		ft_get_index(char *str, char c)
{
	int i;

	i = 0;
	while (*str)
	{
		if (c == *str)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		res;
	int		mplier;
	int		strlen;
	int		is_neg;
	char	*back_pt;
	int		n_base;

	res = 0;
	mplier = 1;
	is_neg = 0;
	n_base = ft_strlen(base);
	if (ft_check_exceptions(&str, &is_neg, base))
		return (0);
	strlen = ft_strlen(str);
	back_pt = str + (strlen - 1) * sizeof(char);
	while (back_pt >= str)
	{
		res += ft_get_index(base, *back_pt) * mplier;
		mplier *= n_base;
		back_pt--;
	}
	if (is_neg)
		res *= -1;
	return (res);
}
