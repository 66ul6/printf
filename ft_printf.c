#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_char(va_arg(args, int));
	else if (format == 's')
		count = ft_str(va_arg(args, char *));
	else if (format == 'p')
		count = ft_ptr((unsigned long long)va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		count = ft_nbr(va_arg(args, int));
	else if (format == 'u')
		count = ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count = ft_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		count = ft_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = -1;
	len = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			count = ft_format(args, format[++i]);
		else
			count = ft_char(format[i]);
		if (count == -1)
		{
			va_end(args);
			return (-1);
		}
		len += count;
	}
	va_end(args);
	return (len);
}
