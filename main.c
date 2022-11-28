/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/28 11:44:19 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	r;
	
	r = ft_printf("lenght");
	//printf("len of ft : %d\n", r);
	//r = ft_printf("imit : abc%c%c%c\n et %d\n et %s\n", 'd', 'e', 'f', 45, "Hello");
	//ft_printf("len of imitation : %d\n", r);
	//ft_printf("pointeur en hexa : %d\n", &r);
	r = printf("real : abc%c%c%c\n et % d\n et %s\n", 'd', 'e' ,'f', 45, "Hello");
	printf("len of printf : %d\n", r);
	printf("pointeur en hexa = %p", &r);
	return (0);
}
