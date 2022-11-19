/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:57:14 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/09 12:03:20 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	size_t	i;

	i = 0;
	if (!tofind[i])
		return ((char *)str);
	if (!n)
		return (NULL);
	i = ft_strlen(tofind);
	while (*str && n-- >= i)
	{
		if (ft_strncmp(str, tofind, i) == 0)
			return ((char *)str);
		str ++;
	}
	return (NULL);
}
/*
   int	main(int ac, char **av)
   {
   (void)ac;
   if (av[1] && av[2])
   {
   ft_putstr(ft_strnstr(av[1], av[2], ft_strlen(av[1])));
   }
   return (0);
   }*/
