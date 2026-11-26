#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}
int	ft_putstr(char *s)
{
	return (write(1, s, ft_strlen(s)));
}
char	*ft_itoa_base(int n, int ul)
{
	n *= 1;
	ul *= 1;
	return NULL;
}

 int	ft_putnbr(int n, int base, int uppercase)
{
	char	*str;
	int		s;

	if (base == 10)
		str = ft_itoa(n);
	else
		str = ft_itoa_base(n, uppercase);
	ft_putstr(str);
	s = ft_strlen(str);
	free(str);
	return (s);
}/*
int	ft_puthex(unsigned int n, char format)
{
	char	*str;

	if (format == 'x')
		str = ft_itoa_base(n, 'x');
	else
		str = ft_itoa_base(n, 'X');
	ft_putstr(str);
	free(str);
	return (ft_strlen(str));
}
int	ft_putptr(void *ptr)
{
	char	*str;
	str = ft_itoa_base((unsigned long)ptr, 'p');
	ft_putstr(str);
	free(str);
	return (ft_strlen(str));
} */
