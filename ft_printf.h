/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:17:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 11:55:40 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

# include <stdio.h>

typedef struct s_arg
{
	struct s_arg	*previous;
	char	type;
	void	*arg;
	struct s_arg	*next;
}t_arg;

int	ft_printf(const char *str, ...);
int	put_nbr(unsigned int n);
int	put_char(unsigned int c);
void	put_str(char *s);
int	stock_str(const char *str);
t_arg	*ft_lstnw(char t, void *content, t_arg **text);
int	check_arg(const char *str, t_arg **text, va_list arg_info);

#endif
