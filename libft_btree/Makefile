# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/27 13:58:19 by aaugusti          #+#    #+#              #
#    Updated: 2019/09/27 14:13:49 by aaugusti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/btree_apply_by_level.c srcs/btree_apply_infix.c\
		  srcs/btree_apply_prefix.c srcs/btree_apply_suffix.c\
		  srcs/btree_create_node.c srcs/btree_insert_data.c\
		  srcs/btree_level_count.c srcs/btree_search_item.c\
		  srcs/ft_print_btree.c

OBJECTS = btree_apply_by_level.o btree_apply_infix.o btree_apply_prefix.o\
		  btree_apply_suffix.o btree_create_node.o btree_insert_data.o\
		  btree_level_count.o btree_search_item.o ft_print_btree.o 

FLAGS = -Wall -Werror -Wextra

NAME = libft_btree

INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c  $(SOURCES) -I $(INCLUDES)
	ar rcs $(NAME).a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME).a
