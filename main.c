/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/24 18:50:41 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	r;
	
	r = ft_printf("%d", 45);
	printf("len of ft : %d\n", r);
	//r = ft_printf("imit : abc%c%c%c\n et %d\n et %s\n", 'd', 'e', 'f', 45, "Hello");
	//ft_printf("len of imitation : %d\n", r);
	//ft_printf("pointeur en hexa : %d\n", &r);
	r = printf("real : abc%c%c%c\n et % d\n et %s\n", 'd', 'e' ,'f', 45, "Hello");
	printf("len of printf : %d\n", r);
	printf("pointeur en hexa = %p", &r);
	return (0);
}
