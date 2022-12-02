/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:19:05 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:02:17 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_ptr(void *ptr_add, t_arg **text)
{
	int				i;
	long long		add;
	char			*s;

	add = (long long) ptr_add;
	ft_putstr("0x");
	i = 2;
	s = ft_itoa_base(add, "0123456789abcdef");
	i += ft_strlen(s);
	if (text)
		put_am(text, i);
	if ((*text)->width != 0)
		return (ft_putstr(s), free(s), (*text)->width);
	else
		return (ft_putstr(s), free(s), i);
}
