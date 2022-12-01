/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:17:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:01:16 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

# include <stdio.h>

typedef struct s_arg
{
	size_t	width;
}t_arg;

int		ft_printf(const char *str, ...);
int		check_arg(size_t *w, va_list arg_info, const char *str, t_arg **text);
/*write arguments*/
int		put_nbr(int n, t_arg **text);
int		put_char(unsigned int c, t_arg **text);
int		put_str(char *s, t_arg **text);
int		put_ptr(void *ptr_add, t_arg **text);
int		put_uns(unsigned int n, t_arg **text);
int		put_hexa(int hex, char c, t_arg **text);
/*struct*/
int		read_arg(const char *str, t_arg **text);
int		ft_lstnw(const char *str, t_arg **text);
/*use struct*/
void	put_am(t_arg **text, size_t written);
void	put_width(int wid);
/*error*/
int		check_error(t_arg **text, char str);

#endif
