/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/30 18:08:50 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	r;

	//ft_printf("%23d", 45);
	r = ft_printf("imit :\ncaracteres : abc%c%c%c\nflag d : %d\nstring : %15s\npointeur en hexa : %p\npourcent : %%\n", 'd', 'e', 'f', -2147483647, "HEllo", &r);
	ft_printf("len of imitation : %d\n\n", r);
	r = printf("real :\ncaracteres : abc%c%c%c\nflag d : %d\nstring : %15s\npointeur en hexa = %p\npourcent : %%\n", 'd', 'e' ,'f', -2147483647, "HEllo", &r);
	printf("len of printf : %d\n\n", r);
	ft_printf("unsigned imit : %u\n", 65535);
	printf("unsigned real : %u\n\n", 65535);
	ft_printf("hexa en mini imit : %x\n", 45);
	printf("hexa en mini real : %x\n\n", 45);
	r = ft_printf("hexa en maj imit : %40X\n", 44545);
	ft_printf("len of imitation : %d\n\n", r);
	r = printf("hexa en maj real : %40X\n", 44545);
	printf("len of printf : %d\n", r);
	return (0);
}
