/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:16:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 12:59:41 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg_info;
	va_start(arg_info, str);
	size_t	written;

	written = 0;
	while (*(str) != '\0')
	{
		if (*str != '%')
		{
			ft_putchar(*str);
			written ++;
		}
		else
		{
			str ++;
			check_arg(&written, arg_info, str);
		}
		str ++;
	}
	return (written);
}
