#include "ft_printf.h"

int	ft_hex(unsigned int num, const char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
	{
		len += ft_hex(num / 16, format);
		len += ft_hex(num % 16, format);
	}
	else
		len += ft_char(base[num]);
	return (len);
}

int	ft_ptr_hex(unsigned long num)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (num >= 16)
	{
		len += ft_ptr_hex(num / 16);
		len += ft_ptr_hex(num % 16);
	}
	else
		len += ft_char(base[num]);
	return (len);
}

int	ft_ptr(unsigned long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len += ft_str("(nil)");
		return (len);
	}
	len += ft_str("0x");
	len += ft_ptr_hex(ptr);
	return (len);
}
