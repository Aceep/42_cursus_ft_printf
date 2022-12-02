/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/02 14:59:52 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>


int	main(void)
{
	int	r;

	// r = ft_printf("imit = %8.6d\n", 45);
	// ft_printf("%d = len\n", r);
	// r = printf("real = %8.6d\n", 45);
	// ft_printf("%d = len\n", r);	
	// r = ft_printf("imit :\n");
	// ft_printf("len = %d\n\n", r);
	//r =ft_printf("caracteres : abc%7c%c%c\n", 'd', 'e', 'f');
	//ft_printf("len = %d\n\n", r);
	r = ft_printf("flag d : %d\n",-2147483647);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("string : %15s\n", "HEllo");
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("pointeur en hexa : %p\n", &r);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("pourcent : %%\n");
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("unsigned imit : %u\n", 65535);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("hexa en mini imit : %x\n", 45);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("hexa en maj imit : %40X\n", 44545);
	// ft_printf("len of imit : %40d\n\n", r);
	// r = printf("real :\n");
	// printf("len = %d\n\n", r);
	// r = printf("caracteres : abc%7c%c%c\n", 'd', 'e', 'f');
	// printf("len = %d\n\n", r);
	// r = printf("flag d : %d\n",-2147483647);
	// printf("len = %d\n\n", r);
	// r = printf("string : %15s\n", "HEllo");
	// printf("len = %d\n\n", r);
	// r = printf("pointeur en hexa : %p\n", &r);
	// printf("len = %d\n\n", r);
	// r = printf("pourcent : %%\n");
	// printf("len = %d\n\n", r);
	// r = printf("unsigned real : %u\n", 65535);
	// printf("len = %d\n\n", r);
	// r = printf("hexa en mini real : %x\n", 45);
	// printf("len = %d\n\n", r);
	// r = printf("hexa en maj real : %40X\n", 44545);
	// printf("len of real : %40d\n", r);
	// ft_printf("\n----------------------------- ERROR CONTROL -----------------------------\n\n");
	// ft_printf("%45%");
	return (0);
}
