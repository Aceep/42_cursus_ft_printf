# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 17:07:50 by alycgaut          #+#    #+#              #
#    Updated: 2022/12/01 18:57:14 by alycgaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
       ft_format_d_i_u.c \
	   ft_format_str_char.c \
	   ft_format_pointer.c \
	   ft_format_hexa.c \
	   read_arg.c \
	   ft_lstnw.c \
       check_arg.c \
	   error.c \
	   struct_use.c \

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h \

LIBFT_PATH = ../libft

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
