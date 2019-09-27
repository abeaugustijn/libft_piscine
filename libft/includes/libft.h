/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:16:38 by aaugusti          #+#    #+#             */
/*   Updated: 2019/09/27 15:16:59 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strlen(char *str);
int		ft_contains_the_same_char(char *str);
int		ft_check_exceptions(char **str, int *is_neg, char *base);
int		ft_get_index(char *str, char c);
int		ft_atoi_base(char *str, char *base);
int		ft_get_index_in_base(char *base, char c);
int		ft_strlen(char *str);
int		ft_convert_to_int(char *nbr, char *base);
char	*ft_convert_to_base(int nbr, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_fibonacci(int index);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_is_prime(int nb);
int		ft_iterative_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_putchar(char c);;
int		ft_strlen(char *str);
int		ft_num_length(int nbr, char *base);
void	ft_putstr_rev(char *str, int is_neg);
void	ft_putnbr_base(int nbr, char *base);
int		ft_putchar(char c);;
void	ft_putstr(char *str);
int		ft_recursive_factorial(int nb);
int		ft_recursive_power(int nb, int power);
int		ft_is_whitespace(char c);
int		ft_strlen(char *str);
char	**ft_get_ptr_mem(char *str);
char	**ft_split_whitespaces(char *str);
void	ft_calc_sqr(int nb, int *res);
int		ft_sqrt(int nb);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_is_word_letter(char *c);
void	ft_cap(char *c);
void	ft_decap_all(char *str);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);

#endif
