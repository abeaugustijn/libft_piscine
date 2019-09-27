/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 12:11:18 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/16 13:37:34 by aaugusti      ########   odam.nl         */
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

char	*ft_fuck_norminette(int str_len, int to_find_len,
		char *str, char *to_find)
{
	int		i;
	int		j;
	int		found;
	char	*current_str_pt;
	char	*current_needle_pt;

	i = -1;
	current_str_pt = str;
	while (++i < str_len)
	{
		current_str_pt = str + i * sizeof(char);
		found = 1;
		j = 0;
		while (j < to_find_len)
		{
			current_needle_pt = current_str_pt + j * sizeof(char);
			found = (*current_needle_pt == *(to_find + j * sizeof(char)));
			if (!found)
				break ;
			j++;
		}
		if (found)
			return (current_str_pt);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		to_find_len;
	int		str_len;
	char	*res;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	res = ft_fuck_norminette(str_len, to_find_len, str, to_find);
	return (res);
}
