#include "include/ft_printf.h"

// cspdiuxX
void	ft_percent(const char format, va_list info)
{
	if (format == 'c')
		ft_putchar(info);
	else if (format == 's')
		ft_putstring(info);
	else if (format == 'p')
		ft_putpointer(info);
	else if (format == 'd' || format == 'i')
		ft_putint(info);
	else if (format == 'u')
		ft_putNSint(info);
	else if (format == 'x' || format == 'X')
		ft_puthex(info, format);
	else if (format == '%')
		printf();
	else
		printf();
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int len, i;

	i = 0;
	if (format == NULL)
		return (0);
	va_start(ap, format);
	while (format[i])  
	{
		if (format[i] == '%')
			ft_percent(format[i + 1], ap);
		else
			ft_putchr(format[i + 1]);
		i++;
	}
}