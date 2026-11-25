#include "ft_printf.h"

ft_putchar(int c)
{
	return (write(1, &c, 1));
}
ft_putstr(char *s)
{
	return (write(1, s, ft_strlen(s)));
}
ft_putnbr(int n, int base, int uppercase)
{
	char	*str;

	if (base == 10)
		str = ft_itoa(n);
	else
		str = ft_itoa_base(n, uppercase);
	ft_putstr(str);
	free(str);
	return (ft_strlen(str));
}
ft_puthex(unsigned int n, char format)
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
ft_putptr(void *ptr)
{
	char	*str;
	str = ft_itoa_base((unsigned long)ptr, 'p');
	ft_putstr(str);
	free(str);
	return (ft_strlen(str));
}
