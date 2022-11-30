/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:16:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 18:36:24 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		arg_info;
	size_t		written;
	int	wid;

	
	va_start(arg_info, str);
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
			wid = 0;
			read_arg(str, &wid);
			check_arg(&written, arg_info, str);
		}
		str ++;
	}
	return (written);
}
