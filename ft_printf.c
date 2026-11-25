#include "ft_printf.h"

int print_format(char format, va_list args)
{
	int count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int), 10, 0);
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_putnbr(va_arg(args, unsigned int), 16, format);
	else if (format == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (format == '%')
		count += write(1, "%", 1);
	return count;
}

int ft_printf(const char *format, ...)
{
	va_list args;
	int count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), args);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);

	return count;
}
int main(void)
{
	ft_printf("Hello %s, your score is %d%%\n", "Alice", 95);
	ft_printf("Character: %c\n", 'A');
	ft_printf("Unsigned: %u\n", 4294967295);
	ft_printf("Hexadecimal: %x\n", 255);
	ft_printf("Pointer: %p\n", (void *)0x12345678);
	ft_printf("Percent sign: %%\n");
	return (0);
}