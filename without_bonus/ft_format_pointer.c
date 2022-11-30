#include "ft_printf.h"

size_t	ft_len(unsigned long add, char *base)
{
	int	n;
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

char	*ft_itoa_base(unsigned long long add, char *base)
{
	char	*str;
	int	base_len;
	int	add_len;

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

int	put_ptr(void *ptr_add)
{
	int	i;
	unsigned long	add;
	char	*s;

	add = (unsigned long) ptr_add;
	i =  put_str("0x");
	s = ft_itoa_base(add, "0123456789abcdef");
	i += ft_strlen(s);
	ft_putstr(s);
	return (free(s), i);
}