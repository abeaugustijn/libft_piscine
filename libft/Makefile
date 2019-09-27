# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/27 13:58:19 by aaugusti          #+#    #+#              #
#    Updated: 2019/09/27 15:20:12 by aaugusti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/ft_atoi_base.c srcs/ft_convert_base.c srcs/ft_fibonacci.c\
		  srcs/ft_find_next_prime.c srcs/ft_is_prime.c srcs/ft_iterative_factorial.c\
		  srcs/ft_iterative_power.c srcs/ft_putnbr_base.c srcs/ft_putstr.c\
		  srcs/ft_recursive_factorial.c srcs/ft_recursive_power.c\
		  srcs/ft_split_whitespaces.c srcs/ft_sqrt.c srcs/ft_str_is_alpha.c\
		  srcs/ft_str_is_lowercase.c srcs/ft_str_is_numeric.c\
		  srcs/ft_str_is_printable.c srcs/ft_str_is_uppercase.c\
		  srcs/ft_strcapitalize.c srcs/ft_strcat.c srcs/ft_strcmp.c\
		  srcs/ft_strdup.c srcs/ft_strlcat.c srcs/ft_strlcpy.c srcs/ft_strlen.c\
		  srcs/ft_strlowcase.c srcs/ft_strncat.c srcs/ft_strncmp.c\
		  srcs/ft_strncpy.c srcs/ft_strrev.c srcs/ft_strstr.c srcs/ft_strupcase.c\
		  srcs/ft_swap.c

OBJECTS = ft_atoi_base.o ft_convert_base.o ft_fibonacci.o ft_find_next_prime.o\
		  ft_is_prime.o ft_iterative_factorial.o ft_iterative_power.o\
		  ft_putnbr_base.o ft_putstr.o ft_recursive_factorial.o ft_recursive_power.o\
		  ft_split_whitespaces.o ft_sqrt.o ft_str_is_alpha.o ft_str_is_lowercase.o\
		  ft_str_is_numeric.o ft_str_is_printable.o ft_str_is_uppercase.o\
		  ft_strcapitalize.o ft_strcat.o ft_strcmp.o ft_strdup.o ft_strlcat.o\
		  ft_strlcpy.o ft_strlen.o ft_strlowcase.o ft_strncat.o ft_strncmp.o\
		  ft_strncpy.o ft_strrev.o ft_strstr.o ft_strupcase.o ft_swap.o

FLAGS = -Wall -Werror -Wextra

NAME = libft

INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c  $(SOURCES) -I $(INCLUDES)
	ar rcs $(NAME).a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME).a
