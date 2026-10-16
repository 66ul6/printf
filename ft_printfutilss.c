#include "ft_printf.h"

int	ft_nbr(int n)
{
	long	num;
	int		len;
	int		temp;

	num = n;
	len = 0;
	if (num < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		len++;
		num = -num;
	}
	if (num > 9)
	{
		temp = ft_nbr(num / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_char((num % 10) + '0');
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}

int	ft_unsigned(unsigned int n)
{
	int	len;
	int	temp;

	len = 0;
	if (n > 9)
	{
		temp = ft_unsigned(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_char((n % 10) + '0');
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}

int	ft_hex(unsigned int n, char format)
{
	int		len;
	int		temp;
	char	*base;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		temp = ft_hex(n / 16, format);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_char(base[n % 16]);
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}

static int	ft_put_ptr(unsigned long long ptr)
{
	int	len;
	int	temp;

	len = 0;
	if (ptr >= 16)
	{
		temp = ft_put_ptr(ptr / 16);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_char("0123456789abcdef"[ptr % 16]);
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}

int	ft_ptr(unsigned long long ptr)
{
	int	len;
	int	temp;

	if (!ptr)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	if (len == -1)
		return (-1);
	temp = ft_put_ptr(ptr);
	if (temp == -1)
		return (-1);
	return (len + temp);
}
