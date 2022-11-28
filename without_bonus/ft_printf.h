/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:17:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 15:42:15 by alycgaut         ###   ########.fr       */
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
	struct s_arg	*previous;
	char	type;
	void	*arg;
	struct s_arg	*next;
}t_arg;

int	ft_printf(const char *str, ...);
int	put_nbr(unsigned int n);
int	put_char(unsigned int c);
int	put_str(char *s);
void	check_arg(size_t *written, va_list arg_info, const char *str);
int	put_ptr(void *ptr_add);

#endif
