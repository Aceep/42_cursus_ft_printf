/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:19:05 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 13:23:40 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_ptr(void *ptr_add)
{
	int				i;
	long long		add;
	char			*s;

	add = (long long) ptr_add;
	i = put_str("0x");
	s = ft_itoa_base(add, "0123456789abcdef");
	i += ft_strlen(s);
	return (ft_putstr(s), free(s), i);
}
