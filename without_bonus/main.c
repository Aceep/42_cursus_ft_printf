/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/12/08 19:24:02 by alycgaut         ###   ########.fr       */
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
	// r = ft_printf("                                          imit :\n");
	// ft_printf("len = %d\n\n", r);
	// r =ft_printf("caracteres : abc%c%c%c\n", 'd', 'e', 'f');
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("flag d : %d\n",-2147483647);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("string : %s\n", "HEllo");
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("pointeur en hexa : %p\n", &r);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("pourcent : %%\n");
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("unsigned imit : %u\n", 65535);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("hexa en mini imit : %x\n", -45);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("hexa en maj imit : %X\n", 44545);
	// ft_printf("len of imit : %d\n\n", r);
	// r = ft_printf("INT_MIN imit : %d\n", INT_MIN);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("long max hexa =  %x\n", LONG_MAX);
	// ft_printf("len = %d\n\n", r);
	r = ft_printf("mix : %x %x %x %x %x %x -42 =%xT\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("len = %d\n\n", r);
	// r = ft_printf("x = %x\n", LONG_MIN);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("u = %u\n", -1);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf("u egal 0 = %u\n\n", 0);
	
	
	// r = printf("                                          real :\n");
	// printf("len = %d\n\n", r);
	// r = printf("caracteres : abc%c%c%c\n", 'd', 'e', 'f');
	// printf("len = %d\n\n", r);
	// r = printf("flag d : %d\n",-2147483647);
	// printf("len = %d\n\n", r);
	// r = printf("string : %s\n", "HEllo");
	// printf("len = %d\n\n", r);
	// r = printf("pointeur en hexa : %p\n", &r);
	// printf("len = %d\n\n", r);
	// r = printf("pourcent : %%\n");
	// printf("len = %d\n\n", r);
	// r = printf("unsigned real : %u\n", 65535);
	// printf("len = %d\n\n", r);
	// r = printf("hexa en mini real : %x\n", -45);
	// printf("len = %d\n\n", r);
	// r = printf("hexa en maj real : %X\n", 44545);
	// printf("len of real : %d\n\n", r);
	// r = printf("INT_MIN real : %d\n", INT_MIN);
	// printf("len = %d\n\n", r);
	// r = printf("long max hexa =  %lx\n", LONG_MAX);
	// printf("len = %d\n\n", r);
	r = printf("mix : %x %x %lx %lx %lx %x -42 =%xT\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("len = %d\n\n", r);
	printf("len = %u\n\n", -42);
	ft_printf("%u\n", -42);
	// r = printf("x = %lx\n", LONG_MIN);
	// printf("len = %d\n\n", r);
	// r = printf("u = %u\n", -1);
	// printf("len = %d\n\n", r);
	// r = printf("u egal 0 = %u\n", 0);
	
	r = ft_printf("\n--------------------------------------------\n NULL %s NULL\n", NULL);
	ft_printf("len = %d\n\n", r);
	
	ft_printf("\n----------------------------- ERROR CONTROL -----------------------------\n\n");
	ft_printf("%%\n");

	// r = ft_printf("%x\n", UINT_MAX);
	// ft_printf("len = %d\n\n", r);
	// r = printf("%x\n", UINT_MAX);
	// ft_printf("len = %d\n\n", r);
	// r = ft_printf(" %x \n", 9223372036854775807LL);
	// ft_printf("len = %d\n\n", r);
	// printf(" %llx \n", 9223372036854775807LL);
	// ft_printf("len = %d\n\n", r);
	return (0);
}
