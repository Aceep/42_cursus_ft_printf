/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:57:54 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/14 15:12:21 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		size = 0;
	else if (len > size)
		len = size;
	else if (len < size)
		size = len;
	dst = (char *)(malloc(sizeof(char) * (size + 1)));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < size && s[start])
	{
		dst[i] = s[start];
		i ++;
		start ++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int	main(void)
{
	char *s = ft_substr("BONJOUR LES HARICOTS !", 8, 0);

	ft_putstr(s);
}*/