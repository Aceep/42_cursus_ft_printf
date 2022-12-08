/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:17:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/08 19:29:34 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

# include <stdio.h>

int		ft_printf(const char *str, ...);
int		check_arg(size_t *w, va_list arg_info, const char *str);
/*write arguments*/
int		put_nbr(int n);
int		put_char(unsigned int c);
int		put_str(char *s);
int		put_ptr(void *ptr_add);
int		put_uns(unsigned int n);
int		put_hexa(long long int hex, char c);

#endif
