#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	tmp;

	tmp = 0;
	if (format == 'c')
		tmp = ft_char(va_arg(args, int));
	else if (format == 's')
		tmp = ft_str(va_arg(args, char *));
	else if (format == 'p')
		tmp = ft_ptr((unsigned long long)va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		tmp = ft_nbr(va_arg(args, int));
	else if (format == 'u')
		tmp = ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		tmp = ft_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		tmp = ft_percent();
	return (tmp);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		tmp;

	if (!format)
		return (-1);
	va_start(args, format);
	i = -1;
	len = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			tmp = ft_format(args, format[++i]);
		else
			tmp = ft_char(format[i]);
		if (tmp == -1)
		{
			va_end(args);
			return (-1);
		}
		len += tmp;
	}
	va_end(args);
	return (len);
}
