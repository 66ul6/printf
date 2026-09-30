#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_char(va_arg(args, int));
	else if (format == 's')
		print_len += ft_str(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_ptr((unsigned long)va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		print_len += ft_nbr(va_arg(args, int));
	else if (format == 'u')
		print_len += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += ft_percent();
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			printed_chars += ft_format(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}
