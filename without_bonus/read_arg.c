#include "ft_printf.h"

int	read_arg(const char *str, int *wid)
{
	int	i;
	char	*width;

	i = 0;
	while ( str[i] >= '0' && str[i] <= '9')
		i ++;
	width = ft_substr(str, 0, i);
	*wid = ft_atoi(width);
	return (free(width), i);
}
/*
int main(void)
{
	int wid;
	const char *s = "je suis le %23s test";
	wid = 0;
	while (*s != '%')
		s ++;
	s ++;
	read_arg(s, &wid);
	printf("%d", wid);
}*/