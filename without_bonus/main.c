/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/01 19:19:08 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>


int	main(void)
{
	int	r;

	r = ft_printf("imit :\n");
	ft_printf("len = %d\n\n", r);
	r =ft_printf("caracteres : abc%7c%c%c\n", 'd', 'e', 'f');
	ft_printf("len = %d\n\n", r);
	r = ft_printf("flag d : %d\n",-2147483647);
	ft_printf("len = %d\n\n", r);
	r = ft_printf("string : %15s\n", "HEllo");
	ft_printf("len = %d\n\n", r);
	r = ft_printf("pointeur en hexa : %p\n", &r);
	ft_printf("len = %d\n\n", r);
	r = ft_printf("pourcent : %%\n");
	ft_printf("len = %d\n\n", r);
	r = ft_printf("unsigned imit : %u\n", 65535);
	ft_printf("len = %d\n\n", r);
	r = ft_printf("hexa en mini imit : %x\n", 45);
	ft_printf("len = %d\n\n", r);
	r = ft_printf("hexa en maj imit : %40X\n", 44545);
	ft_printf("len of imit : %40d\n\n", r);
	r = printf("real :\n");
	printf("len = %d\n\n", r);
	r = printf("caracteres : abc%7c%c%c\n", 'd', 'e', 'f');
	printf("len = %d\n\n", r);
	r = printf("flag d : %d\n",-2147483647);
	printf("len = %d\n\n", r);
	r = printf("string : %15s\n", "HEllo");
	printf("len = %d\n\n", r);
	r = printf("pointeur en hexa : %p\n", &r);
	printf("len = %d\n\n", r);
	r = printf("pourcent : %%\n");
	printf("len = %d\n\n", r);
	r = printf("unsigned real : %u\n", 65535);
	printf("len = %d\n\n", r);
	r = printf("hexa en mini real : %x\n", 45);
	printf("len = %d\n\n", r);
	r = printf("hexa en maj real : %40X\n", 44545);
	printf("len of real : %40d\n", r);
	ft_printf("\n----------------------------- ERROR CONTROL -----------------------------\n\n");
	ft_printf("%45%");
	return (0);
}
// int	main(void)
// {
// 	int	r;

// 	r = ft_printf("imit :\ncaracteres : abc%7c%c%c\nflag d : %d\nstring : %15s\npointeur en hexa : %p\npourcent : %%\n", 'd', 'e', 'f', -2147483647, "HEllo", &r);
// 	ft_printf("len of imitation : %d\n\n", r);
// 	r = printf("real :\ncaracteres : abc%7c%c%c\nflag d : %d\nstring : %15s\npointeur en hexa = %p\npourcent : %%\n", 'd', 'e', 'f', -2147483647, "HEllo", &r);
// 	printf("len of printf : %d\n\n", r);
// 	ft_printf("unsigned imit : %u\n", 65535);
// 	printf("unsigned real : %u\n\n", 65535);
// 	ft_printf("hexa en mini imit : %x\n", 45);
// 	printf("hexa en mini real : %x\n\n", 45);
// 	r = ft_printf("hexa en maj imit : %40X\n", 44545);
// 	ft_printf("len of imit : %40d\n\n", r);
// 	r = printf("hexa en maj real : %40X\n", 44545);
// 	printf("len of real : %40d\n", r);
// 	ft_printf("\n-----------------------------\n");
// 	ft_printf("%45%");
// 	return (0);
// }
