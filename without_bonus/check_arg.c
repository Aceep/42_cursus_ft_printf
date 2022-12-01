/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:53:45 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 17:51:29 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_width(int wid)
{
	while (wid)
	{
		ft_putstr(" ");
		wid --;
	}
}
void	check_arg(size_t *written, va_list arg_info, const char *str, int *wid)
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
	*wid -= *written;
	if (*wid > 0)
		put_width(*wid);
}
