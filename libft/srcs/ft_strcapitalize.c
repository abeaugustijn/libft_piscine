/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 14:06:32 by aaugusti      #+#    #+#                 */
/*   Updated: 2019/09/17 20:24:34 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_word_letter(char *c)
{
	if ((*c >= 'a' && *c <= 'z') ||
			(*c >= 'A' && *c <= 'Z') ||
			(*c >= '0' && *c <= '9'))
	{
		return (1);
	}
	return (0);
}

void	ft_cap(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = (*c - 'a' + 'A');
}

void	ft_decap_all(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return ;
}

char	*ft_strcapitalize(char *str)
{
	char	*prev_p;
	char	*orig;

	orig = str;
	ft_decap_all(str);
	if (ft_is_word_letter(str))
		ft_cap(str);
	prev_p = str;
	str++;
	while (*str)
	{
		if (!ft_is_word_letter(prev_p) && ft_is_word_letter(str))
			ft_cap(str);
		str++;
		prev_p++;
	}
	return (orig);
}
