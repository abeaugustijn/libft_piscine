/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:18:32 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 15:19:12 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int g_res;

	g_res = 0;
	while (*str != 0)
	{
		g_res++;
		str += sizeof(char);
	}
	return (g_res);
}

char	*ft_strrev(char *str)
{
	int		str_len;
	char	*b_ptr;
	char	*e_ptr;
	char	tmp;

	tmp = '\0';
	str_len = ft_strlen(str);
	b_ptr = str;
	e_ptr = str + str_len * sizeof(char) - 1;
	while (e_ptr > b_ptr)
	{
		tmp = *b_ptr;
		*b_ptr = *e_ptr;
		*e_ptr = tmp;
		b_ptr++;
		e_ptr--;
	}
	*(str + str_len + 1) = '\0';
	return (str);
}
