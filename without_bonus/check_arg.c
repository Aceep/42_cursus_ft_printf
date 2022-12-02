/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:53:45 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/02 16:26:49 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(size_t *written, va_list arg_info, const char *str)
{
	if (*str == 'd' || *str == 'i')
		*written += put_nbr((int)va_arg(arg_info, int));
	else if (*str == 'u')
		*written += put_uns((unsigned int)va_arg(arg_info, unsigned int));
	else if (*str == 'c')
		*written += put_char((int) va_arg(arg_info, int));
	else if (*str == 's')
		*written += put_str((char *)va_arg(arg_info, char *));
	else if (*str == '%')
		*written += put_char('%');
	else if (*str == 'p')
		*written += put_ptr((void *)va_arg(arg_info, void *));
	else if (*str == 'x' || *str == 'X')
		*written += put_hexa((int)va_arg(arg_info, int), *str);
	return (0);
}
