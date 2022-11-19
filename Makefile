# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 17:07:50 by alycgaut          #+#    #+#              #
#    Updated: 2022/11/19 17:57:04 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h \

LIBFT = ./libft

NAME = libftprintf.a

GCC = gcc -Wall -Werror -Wextra

RM = rm -rf

$(NAME) : $(OBJS)
	$(MAKE) bonus -C $(LIBFT)
	$(GCC) -c $(SRCS) 
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean : $(CLEAN)
	$(MAKE) fclean -C $(LIBFT)
	$(RM) $(NAME)

re : fclean all
