/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:53:45 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 18:57:01 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(size_t *written, va_list arg_info, const char *str, t_arg **text)
{
	if (check_error(text, *str) != 0)
		return (-1);
	if (*str == 'd' || *str == 'i')
		*written += put_nbr((int)va_arg(arg_info, int), text);
	else if (*str == 'u')
		*written += put_uns((unsigned int)va_arg(arg_info, unsigned int), text);
	else if (*str == 'c')
		*written += put_char((int) va_arg(arg_info, int), text);
	else if (*str == 's')
		*written += put_str((char *)va_arg(arg_info, char *), text);
	else if (*str == '%')
		*written += put_char('%', text);
	else if (*str == 'p')
		*written += put_ptr((void *)va_arg(arg_info, void *), text);
	else if (*str == 'x' || *str == 'X')
		*written += put_hexa((int)va_arg(arg_info, int), *str, text);
	return (0);
}
