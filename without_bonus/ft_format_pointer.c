#include "ft_printf.h"

size_t	ft_len(unsigned long add, int base_len)
{
	int	n;

	n = 1;
	while (add >= base_len)
	{
			add /= base_len;
			n ++;
	}
	return (n);
}

char	*ft_itoa_base(unsigned long add, char *base)
{
	char	*str;
	int	base_len;
	int	add_len;

	base_len = ft_strlen(base);
	add_len = ft_len(add, base_len);
	
}

int	put_ptr(void *ptr_add)
{
	int	i;
	unsigned long	add;
	char	*s;

	add = (unsigned long) ptr_add;
	i =  put_str("0x");
	s = ft_itoa_base(add, "0123456789abcdef");
	return (ft_strlen(s) + i);
}