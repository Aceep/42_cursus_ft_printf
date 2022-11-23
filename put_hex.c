/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:01:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/23 20:15:41 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_ptr(unsigned long long n)
{
	int	written;

	written = 0;
	written += ft_printf("0x");
	while (n > 16)
	{
		int idx = n / 16;
		n = n % 16;
	}
	return (n);
}

int	main(void)
{
	ft_printf("%d", put_ptr(32));
	return (0);
}
