# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 17:07:50 by alycgaut          #+#    #+#              #
#    Updated: 2022/11/23 19:23:44 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
       ft_dec.c \

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h \

LIBFT = ./libft

NAME = libftprintf.a

GCC = gcc -Wall -Werror -Wextra

RM = rm -rf

$(NAME) : $(OBJS)
	$(MAKE) bonus -C $(LIBFT)
	$(GCC) -c $(SRCS) 
	ar rcs $(NAME) $(OBJS) libft/libft.a

all : $(NAME)

clean :
	$(MAKE) clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean : clean
	$(MAKE) fclean -C $(LIBFT)
	$(RM) $(NAME)

re : fclean all
