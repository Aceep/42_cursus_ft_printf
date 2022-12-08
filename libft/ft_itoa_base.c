#include "libft.h"

size_t	ft_len(long long add, char *base)
{
	int			n;
	long long	base_len;

	base_len = ft_strlen(base);
	n = 1;
	while (add >= base_len)
	{
			add /= base_len;
			n ++;
	}
	return (n);
}

char	*ft_itoa_base(long long add, char *base)
{
	char	*str;
	int		base_len;
	int		add_len;

	base_len = ft_strlen(base);
	add_len = ft_len(add, base);
	str = ft_calloc((add_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (add_len)
	{
		add_len -= 1;
		str[add_len] = base[add % base_len];
		add /= base_len;
	}
	return (str);
}

size_t	ft_ulen(unsigned long long add, char *base)
{
	int			n;
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	n = 1;
	while (add >= base_len)
	{
			add /= base_len;
			n ++;
	}
	return (n);
}
#include <stdio.h>
char	*ft_utoa_base(long long add, char *base)
{
	char	*str;
	int		base_len;
	int		add_len;
	unsigned long long int	i;

	i = add;
	if (i <= 0)
		i = -i;
	base_len = ft_strlen(base);
	add_len = ft_ulen(add, base);
	//printf("%llu add \n", add);
	str = ft_calloc((add_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (add_len)
	{
		add_len -= 1;
		str[add_len] = base[add % base_len];
		add /= base_len;
	}
	return (str);
}