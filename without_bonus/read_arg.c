#include "ft_printf.h"

void	read_arg(const char *str, int *wid)
{
	int	i;
	char	*width;

	width = ft_strdup("");
	i = 0;
	while (str[i] != 'd' || str[i] != 'i' || str[i] != 'u' || str[i] != 's' || str[i] != '%' || str[i] != 'p' || str[i] != 'x' ||str[i] != 'X')
		i ++;
	if (i != 0)
		width = ft_substr(str, 0, i);
}