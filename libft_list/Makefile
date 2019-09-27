# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/27 13:58:19 by aaugusti          #+#    #+#              #
#    Updated: 2019/09/27 14:28:31 by aaugusti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SOURCES = srcs/ft_create_elem.c srcs/ft_list_at.c srcs/ft_list_clear.c\
		  srcs/ft_list_find.c srcs/ft_list_foreach.c srcs/ft_list_foreach_if.c\
		  srcs/ft_list_last.c srcs/ft_list_merge.c srcs/ft_list_push_back.c\
		  srcs/ft_list_push_front.c srcs/ft_list_push_params.c\
		  srcs/ft_list_remove_if.c srcs/ft_list_reverse.c srcs/ft_list_size.c

OBJECTS = ft_create_elem.o ft_list_at.o ft_list_clear.o ft_list_find.o\
		  ft_list_foreach.o ft_list_foreach_if.o ft_list_last.o ft_list_merge.o\
		  ft_list_push_back.o ft_list_push_front.o ft_list_push_params.o\
		  ft_list_remove_if.o ft_list_reverse.o ft_list_size.o 

FLAGS = -Wall -Werror -Wextra

NAME = libft_list

INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c  $(SOURCES) -I $(INCLUDES)
	ar rcs $(NAME).a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME).a
