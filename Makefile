# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 17:07:50 by alycgaut          #+#    #+#              #
#    Updated: 2022/11/28 11:52:53 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
       ft_dec.c \
       ft_lstnw.c \
	check_arg.c \

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h \

LIBFT_PATH = ./libft

NAME = libftprintf.a

GCC = gcc -Wall -Werror -Wextra

RM = rm -rf

.c.o:
	${GCC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
	make -C $(LIBFT_PATH) bonus
	cp $(LIBFT_PATH)/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean : clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re : fclean all
