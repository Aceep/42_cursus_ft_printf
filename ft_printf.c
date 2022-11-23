/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:16:33 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/23 20:16:52 by alycgaut         ###   ########.fr       */
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
			if (*str == 'd' || *str == 'i')
				written += put_nbr((unsigned int)va_arg(arg_info, unsigned int));
			else if (*str == 'c')
				written += put_char((int) va_arg(arg_info, int));
			else if (*str == 's')
				written += put_str((char *)va_arg(arg_info, char *));
			/*else if (*str == 'p')
				written += put_ptr((unsigned long long)va_arg(arg_info, unsigned long long));*/
		}
		str ++;
	}
	return (written);
}
